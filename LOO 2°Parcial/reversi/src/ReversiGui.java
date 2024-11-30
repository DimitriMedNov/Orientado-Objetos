
import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Dimension;
import java.awt.Font;
import java.awt.GridBagConstraints;
import java.awt.GridBagLayout;
import java.awt.GridLayout;
import java.awt.Image;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.IOException;
import java.util.ArrayList;
import javax.imageio.ImageIO;
import javax.swing.BorderFactory;
import javax.swing.Icon;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;

public class ReversiGui extends JPanel {
  JPanel panel;
  
  JPanel boardPanel;
  
  static JLabel score1;
  
  static JLabel score2;
  
  static JButton newGame;
  
  static JButton undo;
  
  static JButton[] cell;
  
  static Reversi board;
  
  static ArrayList<Reversi> arrReversi = new ArrayList<>();
  
  static int countUndo = 0;
  
  public static int playerScore = 2;
  
  public static int pcScore = 2;
  
  private static Reversi start;
  
  private static int rows = 8;
  
  private static int cols = 8;
  
  private static Color col = Color.green;
  
  public ReversiGui() {
    super(new BorderLayout());
    setPreferredSize(new Dimension(800, 700));
    setLocation(0, 0);
    board = new Reversi();
    start = board;
    arrReversi.add(new Reversi(board));
    this.panel = new JPanel();
    this.panel.setPreferredSize(new Dimension(800, 60));
    newGame = new JButton();
    newGame.setPreferredSize(new Dimension(80, 50));
    try {
      Image img = ImageIO.read(getClass().getResource("images/start.png"));
      newGame.setIcon(new ImageIcon(img));
    } catch (IOException iOException) {}
    newGame.addActionListener(new Action());
    undo = new JButton();
    undo.setPreferredSize(new Dimension(80, 50));
    try {
      Image img2 = ImageIO.read(getClass().getResource("images/undo.png"));
      undo.setIcon(new ImageIcon(img2));
    } catch (IOException iOException) {}
    undo.addActionListener(new Action());
    JLabel name = new JLabel();
    name.setText("Developed by Onur Sezer");
    name.setLocation(750, 680);
    this.panel.add(newGame);
    this.panel.add(undo);
    add(this.panel, "South");
    this.boardPanel = new JPanel(new GridLayout(8, 8));
    cell = new JButton[64];
    int k = 0;
    for (int row = 0; row < rows; row++) {
      for (int colum = 0; colum < cols; colum++) {
        cell[k] = new JButton();
        cell[k].setSize(50, 50);
        cell[k].setBackground(Color.GREEN);
        cell[k].setBorder(BorderFactory.createLineBorder(Color.BLACK));
        if (board.gameCells[row][colum].getCh() == 'X') {
          try {
            Image img = ImageIO.read(getClass().getResource("images/dark.png"));
            cell[k].setIcon(new ImageIcon(img));
          } catch (IOException iOException) {}
        } else if (board.gameCells[row][colum].getCh() == 'O') {
          try {
            Image img = ImageIO.read(getClass().getResource("images/light.png"));
            cell[k].setIcon(new ImageIcon(img));
          } catch (IOException iOException) {}
        } else if ((row == 2 && colum == 4) || (row == 3 && colum == 5) || (row == 4 && colum == 2) || (row == 5 && colum == 3)) {
          try {
            Image img = ImageIO.read(getClass().getResource("images/legalMoveIcon.png"));
            cell[k].setIcon(new ImageIcon(img));
          } catch (IOException iOException) {}
        } 
        cell[k].addActionListener(new Action());
        this.boardPanel.add(cell[k]);
        k++;
      } 
    } 
    add(this.boardPanel, "Center");
    JPanel scorePanel = new JPanel(new GridBagLayout());
    GridBagConstraints c = new GridBagConstraints();
    scorePanel.setPreferredSize(new Dimension(210, 800));
    JLabel dark = new JLabel();
    try {
      Image img = ImageIO.read(getClass().getResource("images/dark.png"));
      dark.setIcon(new ImageIcon(img));
    } catch (IOException iOException) {}
    JLabel light = new JLabel();
    try {
      Image img = ImageIO.read(getClass().getResource("images/light.png"));
      light.setIcon(new ImageIcon(img));
    } catch (IOException iOException) {}
    score1 = new JLabel();
    score1.setText(" Player : " + playerScore + "  ");
    score1.setFont(new Font("Serif", 1, 22));
    score2 = new JLabel();
    score2.setText(" Computer : " + pcScore + "  ");
    score2.setFont(new Font("Serif", 1, 22));
    c.gridx = 0;
    c.gridy = 1;
    scorePanel.add(dark, c);
    c.gridx = 1;
    c.gridy = 1;
    scorePanel.add(score1, c);
    c.gridx = 0;
    c.gridy = 2;
    scorePanel.add(light, c);
    c.gridx = 1;
    c.gridy = 2;
    scorePanel.add(score2, c);
    add(scorePanel, "East");
  }
  
  static class Action implements ActionListener {
    public void actionPerformed(ActionEvent e) {
      if (e.getSource() == ReversiGui.newGame) {
        ReversiGui.board.reset();
        ReversiGui.arrReversi.clear();
        ReversiGui.arrReversi.add(new Reversi(ReversiGui.start));
        int k = 0;
        for (int row = 0; row < ReversiGui.rows; row++) {
          for (int colum = 0; colum < ReversiGui.cols; colum++) {
            ReversiGui.cell[k].setIcon((Icon)null);
            if (ReversiGui.board.gameCells[row][colum].getCh() == 'X') {
              try {
                Image img = ImageIO.read(getClass().getResource("images/dark.png"));
                ReversiGui.cell[k].setIcon(new ImageIcon(img));
              } catch (IOException iOException) {}
            } else if (ReversiGui.board.gameCells[row][colum].getCh() == 'O') {
              try {
                Image img = ImageIO.read(getClass().getResource("images/light.png"));
                ReversiGui.cell[k].setIcon(new ImageIcon(img));
              } catch (IOException iOException) {}
            } 
            if ((row == 2 && colum == 4) || (row == 3 && colum == 5) || (row == 4 && colum == 2) || (row == 5 && colum == 3))
              try {
                Image img = ImageIO.read(getClass().getResource("images/legalMoveIcon.png"));
                ReversiGui.cell[k].setIcon(new ImageIcon(img));
              } catch (IOException iOException) {} 
            k++;
          } 
        } 
        ReversiGui.playerScore = 2;
        ReversiGui.pcScore = 2;
        ReversiGui.score1.setText(" Player : " + ReversiGui.playerScore + "  ");
        ReversiGui.score2.setText(" Computer : " + ReversiGui.pcScore + "  ");
      } else if (e.getSource() == ReversiGui.undo) {
        ReversiGui.countUndo++;
        int[] arr = new int[3];
        ArrayList<Integer> arrList = new ArrayList<>();
        if (ReversiGui.arrReversi.size() - ReversiGui.countUndo - 1 >= 0) {
          for (int i = 0; i < ReversiGui.rows; i++) {
            for (int m = 0; m < ReversiGui.cols; m++) {
              char c = ((Reversi)ReversiGui.arrReversi.get(ReversiGui.arrReversi.size() - ReversiGui.countUndo - 1)).gameCells[i][m].getCh();
              char x = ((Reversi)ReversiGui.arrReversi.get(ReversiGui.arrReversi.size() - ReversiGui.countUndo - 1)).gameCells[i][m].getCorX();
              int y = ((Reversi)ReversiGui.arrReversi.get(ReversiGui.arrReversi.size() - ReversiGui.countUndo - 1)).gameCells[i][m].getCorY();
              ReversiGui.board.gameCells[i][m].setPosition(x, c, y);
            } 
          } 
          int k = 0;
          for (int row = 0; row < ReversiGui.rows; row++) {
            for (int colum = 0; colum < ReversiGui.cols; colum++) {
              ReversiGui.cell[k].setIcon((Icon)null);
              if (ReversiGui.board.gameCells[row][colum].getCh() == 'X') {
                try {
                  Image img = ImageIO.read(getClass().getResource("images/dark.png"));
                  ReversiGui.cell[k].setIcon(new ImageIcon(img));
                } catch (IOException iOException) {}
              } else if (ReversiGui.board.gameCells[row][colum].getCh() == 'O') {
                try {
                  Image img = ImageIO.read(getClass().getResource("images/light.png"));
                  ReversiGui.cell[k].setIcon(new ImageIcon(img));
                } catch (IOException iOException) {}
              } 
              k++;
            } 
          } 
          ReversiGui.board.findLegalMove(arrList);
          for (int j = 0; j < arrList.size(); j += 2) {
            try {
              Image img = ImageIO.read(getClass().getResource("images/legalMoveIcon.png"));
              ReversiGui.cell[((Integer)arrList.get(j)).intValue() * ReversiGui.rows + ((Integer)arrList.get(j + 1)).intValue()].setIcon(new ImageIcon(img));
            } catch (IOException iOException) {}
          } 
          ReversiGui.board.controlElements(arr);
          ReversiGui.playerScore = arr[0];
          ReversiGui.pcScore = arr[1];
          int point = arr[2];
          ReversiGui.score1.setText("Player : " + ReversiGui.playerScore + "  ");
          ReversiGui.score2.setText("Computer : " + ReversiGui.pcScore + "  ");
        } 
      } else {
        for (int i = 0; i < 64; i++) {
          if (e.getSource() == ReversiGui.cell[i]) {
            int xCor, yCor, ct = -100;
            int[] arr = new int[3];
            System.out.println("button : " + i);
            if (i == 0) {
              xCor = 0;
              yCor = 0;
            } else {
              yCor = i % 8;
              xCor = i / 8;
            } 
            ct = ReversiGui.board.play(xCor, yCor);
            if (ct == 0) {
              ReversiGui.arrReversi.add(new Reversi(ReversiGui.board));
              int k = 0;
              for (int row = 0; row < ReversiGui.rows; row++) {
                for (int colum = 0; colum < ReversiGui.cols; colum++) {
                  if (ReversiGui.board.gameCells[row][colum].getCh() == 'X') {
                    try {
                      Image img = ImageIO.read(getClass().getResource("images/dark.png"));
                      ReversiGui.cell[k].setIcon(new ImageIcon(img));
                    } catch (IOException iOException) {}
                  } else if (ReversiGui.board.gameCells[row][colum].getCh() == 'O') {
                    try {
                      Image img = ImageIO.read(getClass().getResource("images/light.png"));
                      ReversiGui.cell[k].setIcon(new ImageIcon(img));
                    } catch (IOException iOException) {}
                  } 
                  k++;
                } 
              } 
              ReversiGui.board.controlElements(arr);
              ReversiGui.playerScore = arr[0];
              ReversiGui.pcScore = arr[1];
              int point = arr[2];
              ReversiGui.score1.setText("Player : " + ReversiGui.playerScore + "  ");
              ReversiGui.score2.setText("Computer : " + ReversiGui.pcScore + "  ");
            } 
            if (ct == 0 || ct == -1) {
              ReversiGui.board.play();
              ReversiGui.arrReversi.add(new Reversi(ReversiGui.board));
              ArrayList<Integer> arrList = new ArrayList<>();
              int k = 0;
              for (int row = 0; row < ReversiGui.rows; row++) {
                for (int colum = 0; colum < ReversiGui.cols; colum++) {
                  if (ReversiGui.board.gameCells[row][colum].getCh() == 'X') {
                    try {
                      Image img = ImageIO.read(getClass().getResource("images/dark.png"));
                      ReversiGui.cell[k].setIcon(new ImageIcon(img));
                    } catch (IOException iOException) {}
                  } else if (ReversiGui.board.gameCells[row][colum].getCh() == 'O') {
                    try {
                      Image img = ImageIO.read(getClass().getResource("images/light.png"));
                      ReversiGui.cell[k].setIcon(new ImageIcon(img));
                    } catch (IOException iOException) {}
                  } else if (ReversiGui.board.gameCells[row][colum].getCh() == '.') {
                    ReversiGui.cell[k].setIcon((Icon)null);
                  } 
                  k++;
                } 
              } 
              ReversiGui.board.findLegalMove(arrList);
              for (int j = 0; j < arrList.size(); j += 2) {
                try {
                  Image img = ImageIO.read(getClass().getResource("images/legalMoveIcon.png"));
                  ReversiGui.cell[((Integer)arrList.get(j)).intValue() * ReversiGui.rows + ((Integer)arrList.get(j + 1)).intValue()].setIcon(new ImageIcon(img));
                } catch (IOException iOException) {}
              } 
              ReversiGui.board.controlElements(arr);
              ReversiGui.playerScore = arr[0];
              ReversiGui.pcScore = arr[1];
              int point = arr[2];
              ReversiGui.score1.setText("Player : " + ReversiGui.playerScore + "  ");
              ReversiGui.score2.setText("Computer : " + ReversiGui.pcScore + "  ");
            } 
          } 
        } 
        int st = ReversiGui.board.endOfGame();
        if (st == 0) {
          if (ReversiGui.playerScore > ReversiGui.pcScore) {
            JOptionPane.showMessageDialog(null, "No legal move!\nPlayer Win!", "Game Over", -1);
          } else {
            JOptionPane.showMessageDialog(null, "No legal move!\nComputer Win!", "Game Over", -1);
          } 
        } else if (st == 1 || st == 3) {
          JOptionPane.showMessageDialog(null, "Computer Win!", "Game Over", -1);
        } else if (st == 2 || st == 4) {
          JOptionPane.showMessageDialog(null, "Player Win!", "Game Over", -1);
        } else if (st == 3) {
          JOptionPane.showMessageDialog(null, "Scoreless!", "Game Over", -1);
        } 
      } 
    }
  }
}

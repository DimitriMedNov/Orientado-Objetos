
import java.awt.BorderLayout;
import java.awt.Component;
import java.awt.Dimension;
import java.awt.Toolkit;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class main extends JFrame {
  private static JPanel pnlLeft;
  
  public main() {
    super("Juego Othelo");
    setLayout(new BorderLayout());
    Dimension screenSize = Toolkit.getDefaultToolkit().getScreenSize();
    int height = screenSize.height;
    int width = screenSize.width;
    setSize(width / 2, height / 2);
    setLocationRelativeTo((Component)null);
    pnlLeft = new ReversiGui();
    add(pnlLeft, "Center");
    setSize(800, 700);
    setDefaultCloseOperation(3);
    setResizable(false);
    setVisible(true);
  }
  
  public static void main(String[] args) {
    new main();
  }
}

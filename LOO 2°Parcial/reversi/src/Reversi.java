
import java.util.ArrayList;

public class Reversi {
  private int rows = 8;
  
  private int cols = 8;
  
  private int userCont = 0;
  
  private int computerCont = 0;
  
  public cell[][] gameCells;
  
  public Reversi() {
    int mid = this.rows / 2;
    this.gameCells = new cell[8][8];
    int i;
    for (i = 0; i < this.rows; i++)
      this.gameCells[i] = new cell[8]; 
    for (i = 0; i < this.rows; i++) {
      for (int j = 0; j < this.cols; j++) {
        this.gameCells[i][j] = new cell();
        char c = (char)(97 + j);
        if (i == mid - 1 && j == mid - 1) {
          this.gameCells[i][j].setPosition(c, 'X', i + 1);
        } else if (i == mid - 1 && j == mid) {
          this.gameCells[i][j].setPosition(c, 'O', i + 1);
        } else if (i == mid && j == mid - 1) {
          this.gameCells[i][j].setPosition(c, 'O', i + 1);
        } else if (i == mid && j == mid) {
          this.gameCells[i][j].setPosition(c, 'X', i + 1);
        } else {
          this.gameCells[i][j].setPosition(c, '.', i + 1);
        } 
      } 
    } 
  }
  
  public Reversi(Reversi obje) {
    this.gameCells = new cell[8][8];
    int i;
    for (i = 0; i < this.rows; i++)
      this.gameCells[i] = new cell[8]; 
    for (i = 0; i < this.rows; i++) {
      for (int j = 0; j < this.cols; j++) {
        this.gameCells[i][j] = new cell();
        char c = obje.gameCells[i][j].getCh();
        int y = obje.gameCells[i][j].getCorY();
        char x = obje.gameCells[i][j].getCorX();
        this.gameCells[i][j].setPosition(x, c, y);
      } 
    } 
  }
  
  public void findLegalMove(ArrayList<Integer> arr) {
    int max = 0;
    int change = 0;
    for (int i = 0; i < this.rows; i++) {
      for (int j = 0; j < this.cols; j++) {
        if (this.gameCells[i][j].getCh() == '.') {
          int[] numberOfMoves = new int[1];
          move(i, j, change, 'X', 'O', numberOfMoves);
          if (numberOfMoves[0] != 0) {
            arr.add(Integer.valueOf(i));
            arr.add(Integer.valueOf(j));
          } 
        } 
      } 
    } 
  }
  
  public int play() {
    int max = 0, mX = 0, mY = 0;
    int change = 0;
    int[] numberOfMoves = new int[1];
    for (int i = 0; i < this.rows; i++) {
      for (int j = 0; j < this.cols; j++) {
        if (this.gameCells[i][j].getCh() == '.') {
          move(i, j, change, 'O', 'X', numberOfMoves);
          if (max < numberOfMoves[0]) {
            max = numberOfMoves[0];
            mX = i;
            mY = j;
          } 
        } 
      } 
    } 
    this.computerCont = max;
    if (this.computerCont == 0) {
      this.computerCont = -1;
      return -1;
    } 
    if (this.computerCont != 0) {
      change = 1;
      move(mX, mY, change, 'O', 'X', numberOfMoves);
    } 
    return 0;
  }
  
  public int play(int xCor, int yCor) {
    int max = 0;
    int[] numberOfMoves = new int[1];
    int change = 0;
    int i;
    for (i = 0; i < this.rows; i++) {
      for (int j = 0; j < this.cols; j++) {
        if (this.gameCells[i][j].getCh() == '.') {
          move(i, j, change, 'X', 'O', numberOfMoves);
          if (max < numberOfMoves[0])
            max = numberOfMoves[0]; 
        } 
      } 
    } 
    this.userCont = max;
    if (this.userCont == 0) {
      this.userCont = -1;
      return -1;
    } 
    if (this.userCont != 0) {
      change = 1;
      if (this.gameCells[xCor][yCor].getCh() != '.')
        return 1; 
      int status = move(xCor, yCor, change, 'X', 'O', numberOfMoves);
      if (status == -1)
        return 1; 
    } 
    for (i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
        System.out.printf("%c", new Object[] { Character.valueOf(this.gameCells[i][j].getCh()) });
      } 
      System.out.println("");
    } 
    return 0;
  }
  
  public int endOfGame() {
    int[] arr = new int[3];
    controlElements(arr);
    int cross = arr[0];
    int circular = arr[1];
    int point = arr[2];
    if ((this.userCont == -1 && this.computerCont == -1) || point == 0) {
      if (this.userCont == -1 && this.computerCont == -1)
        return 0; 
      if (circular > cross)
        return 1; 
      if (cross > circular)
        return 2; 
      if (cross == 0)
        return 3; 
      if (circular == 0)
        return 4; 
      return 5;
    } 
    return -1;
  }
  
  public void controlElements(int[] arr) {
    int cross = 0, point = 0, circular = 0;
    int max = 0, numberOfMoves = 0;
    for (int i = 0; i < this.rows; i++) {
      for (int j = 0; j < this.cols; j++) {
        if (this.gameCells[i][j].getCh() == 'X') {
          cross++;
        } else if (this.gameCells[i][j].getCh() == 'O') {
          circular++;
        } else if (this.gameCells[i][j].getCh() == '.') {
          point++;
        } 
      } 
    } 
    arr[0] = cross;
    arr[1] = circular;
    arr[2] = point;
  }
  
  public void reset() {
    int mid = this.rows / 2;
    for (int i = 0; i < this.rows; i++) {
      for (int j = 0; j < this.cols; j++) {
        char c = (char)(97 + j);
        if (i == mid - 1 && j == mid - 1) {
          this.gameCells[i][j].setPosition(c, 'X', i + 1);
        } else if (i == mid - 1 && j == mid) {
          this.gameCells[i][j].setPosition(c, 'O', i + 1);
        } else if (i == mid && j == mid - 1) {
          this.gameCells[i][j].setPosition(c, 'O', i + 1);
        } else if (i == mid && j == mid) {
          this.gameCells[i][j].setPosition(c, 'X', i + 1);
        } else {
          this.gameCells[i][j].setPosition(c, '.', i + 1);
        } 
        System.out.printf("i : %d, j : %d, c : %c\n", new Object[] { Integer.valueOf(i), Integer.valueOf(j), Character.valueOf(this.gameCells[i][j].getCh()) });
      } 
    } 
  }
  
  int move(int xCor, int yCor, int change, char char1, char char2, int[] numberOfMoves) {
    int st2 = 0, st = 0;
    int status = -1;
    int x = xCor, y = yCor;
    numberOfMoves[0] = 0;
    if (x + 1 < this.rows && this.gameCells[x + 1][y].getCh() == char2) {
      int cont = x;
      while (cont < this.rows && st2 != -1 && st != 2) {
        cont++;
        if (cont < this.rows) {
          if (this.gameCells[cont][y].getCh() == char2) {
            st = 1;
            continue;
          } 
          if (this.gameCells[cont][y].getCh() == char1) {
            st = 2;
            continue;
          } 
          st2 = -1;
        } 
      } 
      if (st == 2) {
        int temp = cont - x - 1;
        numberOfMoves[0] = numberOfMoves[0] + temp;
      } 
      if (st == 2 && change == 1) {
        for (int i = x; i < cont; i++) {
          char str = this.gameCells[i][y].getCorX();
          int ix = this.gameCells[i][y].getCorY();
          this.gameCells[i][y].setPosition(str, char1, ix);
        } 
        status = 0;
      } 
      st = 0;
      st2 = 0;
    } 
    if (x - 1 >= 0 && this.gameCells[x - 1][y].getCh() == char2) {
      int cont = x;
      while (cont >= 0 && st2 != -1 && st != 2) {
        cont--;
        if (cont >= 0) {
          if (this.gameCells[cont][y].getCh() == char2) {
            st = 1;
            continue;
          } 
          if (this.gameCells[cont][y].getCh() == char1) {
            st = 2;
            continue;
          } 
          st2 = -1;
        } 
      } 
      if (st == 2) {
        int temp = x - cont - 1;
        numberOfMoves[0] = numberOfMoves[0] + temp;
      } 
      if (st == 2 && change == 1) {
        for (int i = cont; i <= x; i++) {
          char str = this.gameCells[i][y].getCorX();
          int ix = this.gameCells[i][y].getCorY();
          this.gameCells[i][y].setPosition(str, char1, ix);
        } 
        status = 0;
      } 
      st = 0;
      st2 = 0;
    } 
    if (y + 1 < this.cols && this.gameCells[x][y + 1].getCh() == char2) {
      int cont = y;
      while (cont < this.cols && st2 != -1 && st != 2) {
        cont++;
        if (cont < this.cols) {
          if (this.gameCells[x][cont].getCh() == char2) {
            st = 1;
            continue;
          } 
          if (this.gameCells[x][cont].getCh() == char1) {
            st = 2;
            continue;
          } 
          st2 = -1;
        } 
      } 
      if (st == 2) {
        int temp = cont - y - 1;
        numberOfMoves[0] = numberOfMoves[0] + temp;
      } 
      if (st == 2 && change == 1) {
        for (int i = y; i < cont; i++) {
          char str = this.gameCells[x][i].getCorX();
          int ix = this.gameCells[x][i].getCorY();
          this.gameCells[x][i].setPosition(str, char1, ix);
        } 
        status = 0;
      } 
      st = 0;
      st2 = 0;
    } 
    if (y - 1 >= 0 && this.gameCells[x][y - 1].getCh() == char2) {
      int cont = y;
      while (cont >= 0 && st2 != -1 && st != 2) {
        cont--;
        if (cont >= 0) {
          if (this.gameCells[x][cont].getCh() == char2) {
            st = 1;
            continue;
          } 
          if (this.gameCells[x][cont].getCh() == char1) {
            st = 2;
            continue;
          } 
          st2 = -1;
        } 
      } 
      if (st == 2) {
        int temp = y - cont - 1;
        numberOfMoves[0] = numberOfMoves[0] + temp;
      } 
      if (st == 2 && change == 1) {
        for (int i = cont; i <= y; i++) {
          char str = this.gameCells[x][i].getCorX();
          int ix = this.gameCells[x][i].getCorY();
          this.gameCells[x][i].setPosition(str, char1, ix);
        } 
        status = 0;
      } 
      st = 0;
      st2 = 0;
    } 
    if (x - 1 >= 0 && y + 1 < this.cols && this.gameCells[x - 1][y + 1].getCh() == char2) {
      int corY = y;
      int corX = x;
      while (corX >= 0 && corY < this.cols && st2 != -1 && st != 2) {
        corX--;
        corY++;
        if (corX >= 0 && corY < this.cols) {
          if (this.gameCells[corX][corY].getCh() == char2) {
            st = 1;
            continue;
          } 
          if (this.gameCells[corX][corY].getCh() == char1) {
            st = 2;
            continue;
          } 
          st2 = -1;
        } 
      } 
      if (st == 2) {
        int temp = x - corX - 1;
        numberOfMoves[0] = numberOfMoves[0] + temp;
      } 
      if (st == 2 && change == 1) {
        while (corX <= x && y < corY) {
          corX++;
          corY--;
          if (corX <= x && y <= corY) {
            char str = this.gameCells[corX][corY].getCorX();
            int ix = this.gameCells[corX][corY].getCorY();
            this.gameCells[corX][corY].setPosition(str, char1, ix);
          } 
        } 
        status = 0;
      } 
      st = 0;
      st2 = 0;
    } 
    if (x - 1 >= 0 && y - 1 >= 0 && this.gameCells[x - 1][y - 1].getCh() == char2) {
      int corY = y;
      int corX = x;
      while (corX >= 0 && corY >= 0 && st2 != -1 && st != 2) {
        corX--;
        corY--;
        if (corX >= 0 && corY >= 0) {
          if (this.gameCells[corX][corY].getCh() == char2) {
            st = 1;
            continue;
          } 
          if (this.gameCells[corX][corY].getCh() == char1) {
            st = 2;
            continue;
          } 
          st2 = -1;
        } 
      } 
      if (st == 2) {
        int temp = x - corX - 1;
        numberOfMoves[0] = numberOfMoves[0] + temp;
      } 
      if (st == 2 && change == 1) {
        while (corX <= x && corY <= y) {
          corX++;
          corY++;
          if (corX <= x && corY <= y) {
            char str = this.gameCells[corX][corY].getCorX();
            int ix = this.gameCells[corX][corY].getCorY();
            this.gameCells[corX][corY].setPosition(str, char1, ix);
          } 
        } 
        status = 0;
      } 
      st = 0;
      st2 = 0;
    } 
    if (x + 1 < this.rows && y + 1 < this.cols && this.gameCells[x + 1][y + 1].getCh() == char2) {
      int corY = y;
      int corX = x;
      while (corX < this.rows && corY < this.cols && st2 != -1 && st != 2) {
        corX++;
        corY++;
        if (corX < this.rows && corY < this.cols) {
          if (this.gameCells[corX][corY].getCh() == char2) {
            st = 1;
            continue;
          } 
          if (this.gameCells[corX][corY].getCh() == char1) {
            st = 2;
            continue;
          } 
          st2 = -1;
        } 
      } 
      if (st == 2) {
        int temp = corX - x - 1;
        numberOfMoves[0] = numberOfMoves[0] + temp;
      } 
      if (st == 2 && change == 1) {
        while (corX >= x && corY >= y) {
          corX--;
          corY--;
          if (corX >= x && corY >= y) {
            char str = this.gameCells[corX][corY].getCorX();
            int ix = this.gameCells[corX][corY].getCorY();
            this.gameCells[corX][corY].setPosition(str, char1, ix);
          } 
        } 
        status = 0;
      } 
      st = 0;
      st2 = 0;
    } 
    if (x + 1 < this.rows && y - 1 >= 0 && this.gameCells[x + 1][y - 1].getCh() == char2) {
      int corY = y;
      int corX = x;
      while (corX < this.rows && corY >= 0 && st2 != -1 && st != 2) {
        corX++;
        corY--;
        if (corX < this.rows && corY >= 0) {
          if (this.gameCells[corX][corY].getCh() == char2) {
            st = 1;
            continue;
          } 
          if (this.gameCells[corX][corY].getCh() == char1) {
            st = 2;
            continue;
          } 
          st2 = -1;
        } 
      } 
      if (st == 2) {
        int temp = corX - x - 1;
        numberOfMoves[0] = numberOfMoves[0] + temp;
      } 
      if (st == 2 && change == 1) {
        while (corX >= x && corY <= y) {
          corX--;
          corY++;
          if (corX >= x && corY <= y) {
            char str = this.gameCells[corX][corY].getCorX();
            int ix = this.gameCells[corX][corY].getCorY();
            this.gameCells[corX][corY].setPosition(str, char1, ix);
          } 
        } 
        status = 0;
      } 
      st = 0;
      st2 = 0;
    } 
    if (status == 0)
      return 0; 
    return -1;
  }
}

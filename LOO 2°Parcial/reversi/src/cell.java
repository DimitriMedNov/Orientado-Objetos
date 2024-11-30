/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


/**
 *
 * @author samuel
 */
public class cell {
    private int corY;
  
  private char corX;
  
  private char ch;
  
  public cell(char x, int y, char c) {
    this.corY = y;
    this.corX = x;
    this.ch = c;
  }
  
  cell() {}
  
  char getCorX() {
    return this.corX;
  }
  
  int getCorY() {
    return this.corY;
  }
  
  char getCh() {
    return this.ch;
  }
  
  void setPosition(char x, char c, int y) {
    this.corX = x;
    this.corY = y;
    this.ch = c;
  }
}

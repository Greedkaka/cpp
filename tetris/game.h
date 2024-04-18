
#ifndef GAME_H
#define GAME_H

#include "tetromino.h"
#include <string.h>

#define BOARD_WIDTH 10
#define BOARD_HEIGHT 20
#define LINES 40

#define DROP_DELAY 60

class Game {
private:
  // 게임 판을 나타내는 배열
  // board[x][y]가 true 인 경우 x, y 위치에 고정된 블록이 존재하는 것을 의미한다
  std::string board[BOARD_WIDTH][BOARD_HEIGHT];

public:
  Game(){
    for (int x = 1; x < BOARD_WIDTH-1; x++){
      board[x][0]="━";
      board[x][BOARD_HEIGHT-1]="━";
    }
    for (int y = 1; y < BOARD_WIDTH-1; y++){
      board[0][y]="┃";
      board[BOARD_WIDTH-1][y]="┃";
    }
    board[0][0]="┏";
    board[BOARD_WIDTH-1][0]="┓";
    board[0][BOARD_HEIGHT-1]="┗";
    board[BOARD_WIDTH-1][BOARD_HEIGHT-1]="┛";
  }

  string getBoard(int x, int y){
    return board[x][y];
  }

  // 게임의 한 프레임을 처리한다.
  void update();

  // 게임 화면을 그린다.
  void draw();

  // 게임 루프가 종료되어야 하는지 여부를 반환한다.
  bool shouldExit();

  Game();
};
#endif
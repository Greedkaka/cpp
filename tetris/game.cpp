#include "game.h"
#include "tetromino.h"
#include <iostream>

using namespace std;
// 게임의 한 프레임을 처리한다.
void Game::update(){
    
}

// 게임 화면을 그린다.
void Game::draw(){
  for (int y=0; y<BOARD_HEIGHT; y++){
    for(int x=0; x<BOARD_WIDTH; x++){
      cout<<board[x][y];
    }
    cout<<endl;
  }
}

// 게임 루프가 종료되어야 하는지 여부를 반환한다.
bool Game::shouldExit(){

}
Game::Game(){
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
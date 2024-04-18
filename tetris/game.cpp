#include "game.h"
#include "console.h"
#include <iostream>

using namespace std;
// 게임의 한 프레임을 처리한다.
  void update(){
    
  };

  // 게임 화면을 그린다.
  void draw(){
    for (int y=0; y<BOARD_HEIGHT; y++){
      for(int x=0; x<BOARD_WIDTH; x++){
        cout<<getBoard(x,y);
      }
      cout<<endl;
    }
  }

  // 게임 루프가 종료되어야 하는지 여부를 반환한다.
  bool shouldExit();

  Game();
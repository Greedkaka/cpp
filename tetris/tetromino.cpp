#include "tetromino.h"

Tetromino::Tetromino(std::string name, int size, std::string shape){
    for(int i=0; i<shape.length(); i++){
        if(shape[i]=='O')
            shape_[i/size][i%size]="■";
    }
}

Tetromino Tetromino::I("I",4,"XXXXOOOOXXXXXXXX");
Tetromino Tetromino::J("J",3,"OXXOOOXXX");
Tetromino Tetromino::L("L",3,"XXOOOOXXX");
Tetromino Tetromino::O("O",2,"OOOO");
Tetromino Tetromino::S("S",3,"XOOOOXXXX");
Tetromino Tetromino::T("T",3,"XOXOOOXXX");
Tetromino Tetromino::Z("Z",3,"OOXXOOXXX");

Tetromino rotatedCW(){//오른쪽
    return 
}
Tetromino rotatedCCW();

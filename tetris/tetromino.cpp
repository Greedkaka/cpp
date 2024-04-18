#include "tetromino.h"

Tetromino::Tetromino(std::string name, int size, std::string shape){
    this->name_=name;
    size_=size;
    original_=this;
    
    for(int i=0; i<shape.length(); i++){
        if(shape[i]=='O')
            shape_[i/size][i%size]=true;
    }
}

Tetromino Tetromino::I("I",4,"XXXXOOOOXXXXXXXX");
Tetromino Tetromino::J("J",3,"OXXOOOXXX");
Tetromino Tetromino::L("L",3,"XXOOOOXXX");
Tetromino Tetromino::O("O",2,"OOOO");
Tetromino Tetromino::S("S",3,"XOOOOXXXX");
Tetromino Tetromino::T("T",3,"XOXOOOXXX");
Tetromino Tetromino::Z("Z",3,"OOXXOOXXX");

Tetromino Tetromino::rotatedCW(){//오른쪽
    bool tmp[size()][size()];
    for (int y = 0; y < size(); y++){
        for(int x=0; x< size(); x++)
            tmp[x][size()-y-1]=shape_[y][x];
    }

    for (int y = 0; y < size(); y++){
        for(int x=0; x< size(); x++)
            shape_[y][x]=tmp[y][x];
    }
    
    return *original();
}
Tetromino Tetromino::rotatedCCW(){//왼쪽
    bool tmp[size()][size()];
    for (int y = 0; y < size(); y++){
        for(int x=0; x< size(); x++)
            tmp[x][y]=shape_[y][x];
    }

    for (int y = 0; y < size(); y++){
        for(int x=0; x< size(); x++)
            shape_[y][x]=tmp[y][x];
    }
    
    return *original();
}
// 화면의 x, y 위치에 s 문자열로  테트로미노를 그린다
void Tetromino::drawAt(std::string s, int x, int y){

}

//
//  PieceTest.cpp
//  Tetris
//
//  Created by Tom Nguyen on 12/24/18.
//  Copyright © 2018 Tom Nguyen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Pieces.hpp"
#include <vector>
#include <string>
#include "PieceTemplate.h"

//Body, skirt for T
//std::vector< std::pair<int, int> > T_body = { {0,0},{1,0},{1,1},{2,0} };

void checkPiece(Piece *piece, std::vector< std::pair <int, int> > Body, std::vector<int> Skirt, int Width, int Height){
    
    //test if the body is the same
    std::cout << "Body:\t";
    if (Body == piece->getBody()){
        std::cout<< "SUCCESS\t";
    } else {
        std::cout<< "FAILED\t";
    }
    
    for (std::pair <int, int> x: piece->getBody()){
        std::cout << "(" << x.first << "," << x.second << ") ";
    }
    std::cout << std::endl;
    //-----------------------------------------
    
    //check the skirt
    std::cout << "Skirt:\t";
    if(Skirt == piece->getSkirt()){
        std::cout<< "SUCCESS\t";
    } else {
        std::cout<< "FAILED\t";
    }
    
    for (int x: piece->getSkirt()){
        std::cout << x << " ";
    }
    std::cout << std::endl;
    //-----------------------------------------
    
    //check width
    std::cout << "Width:\t";
    if (Width == piece->getWidth()){
        std::cout<< "SUCCESS\t";
    } else {
        std::cout<< "FAILED\t";
    }
    
    std::cout << piece->getWidth() << " " << std::endl;
    //-----------------------------------------
    
    //check Height
    std::cout << "Height:\t";
    if (Height == piece->getHeight()){
        std::cout<< "SUCCESS\t";
    } else {
        std::cout<< "FAILED\t";
    }
    std::cout << piece->getHeight() << " " << std::endl;
}

int main(){
    
    Piece T(t_body), Square(square_body), Stick(stick_body);
    std::vector<int> t_skirt = {0,0,0}, square_skirt = {0,0}, stick_skirt = {0};
    
    std::cout<< "Piece: T" << std::endl;
    checkPiece(&T, t_body, t_skirt, 3, 2);
    std::cout << std::endl;
    
    std::cout<< "Piece: Square" << std::endl;
    checkPiece(&Square, square_body, square_skirt, 2, 2);
    std::cout << std::endl;
    
    std::cout<< "Piece: Stick" << std::endl;
    checkPiece(&Stick, stick_body, stick_skirt, 1, 4);
    std::cout << std::endl;
    return 0;
}



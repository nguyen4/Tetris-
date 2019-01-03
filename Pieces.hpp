//
//  Pieces.hpp
//  Tetris
//
//  Created by Tom Nguyen on 12/20/18.
//  Copyright © 2018 Tom Nguyen. All rights reserved.
//

#ifndef Pieces_hpp
#define Pieces_hpp

#include <stdio.h>
#include <vector>

class Piece {
public:
    Piece(std::vector < std::pair <int, int> > body);
    std::vector< std::pair <int, int> > getBody();
    std::vector<int> getSkirt();
    int getWidth();
    int getHeight();
    
    
private:
    std::vector< std::pair <int, int> > body;
    std::vector<int> skirt;         //stores lowest y value for each x
    int width;                      //width of piece
    int height;                     //height of piece
    Piece *next;                    // points to next rotation;
};

#endif /* Pieces_hpp */

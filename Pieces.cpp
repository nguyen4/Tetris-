//
//  Pieces.cpp
//  Tetris
//
//  Created by Tom Nguyen on 12/20/18.
//  Copyright © 2018 Tom Nguyen. All rights reserved.
//

#include "Pieces.hpp"

Piece::Piece(std::vector < std::pair <int, int> > body){
    this->body = body;
    
    //find the hax height and width of the piece
    int max_height = 0;
    int max_width = 0;
    
    std::vector< std::pair <int, int> >::iterator i;
    
    for (i = body.begin(); i != body.end(); i++){
        if (max_width < i->first + 1){
            max_width = i->first + 1;
        }
        if (max_height < i->second + 1){
            max_height = i->second + 1;
        }
    }
    
    width = max_width;
    height = max_height;
    
    //find the skirt
    int x, y;
    std::vector<int> arr(width);
    std::vector<int>::iterator j;
    
    for (i = body.begin(), j = arr.begin(), x = i->first, y = i->second; i != body.end(); i++){
        
        if (x != i->first){
            x = i->first;
            //y = i->first;
            j++;
            *j = i->second;
        }
        
        if  (i->second < (*j)){
            *j = i->second;
        }
        //else update min if min is less than current y
    }
    
    skirt = arr;
}

std::vector< std::pair <int, int> > Piece::getBody(){
    return body;
}

std::vector<int> Piece::getSkirt(){
    return skirt;
}

int Piece::getWidth(){
    return width;
}

int Piece::getHeight(){
    return height;
}


//
//  main.cpp
//  Tetris
//
//  Created by Tom Nguyen on 12/20/18.
//  Copyright © 2018 Tom Nguyen. All rights reserved.
//

#include <SFML/Graphics.hpp>
#include "GlobalVars.h"
#include <iostream>

int main(){
    
    sf::RenderWindow window( sf::VideoMode(Win_Width, Win_Height), "Tetris" );
    window.setFramerateLimit(60);
    
    while ( window.isOpen() )
    {
        
        sf::Event e;
        
        while ( window.pollEvent(e) )
        {
            switch ( e.type )
            {
                case sf::Event::Closed:
                    window.close( );
                    
                    break;
            }
        }
        
        //Update Game
        
        window.clear();
        
        //draw objects here
        
        window.display();
    }
    
}

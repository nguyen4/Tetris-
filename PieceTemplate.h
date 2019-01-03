//
//  PieceTemplate.h
//  
//
//  Created by Tom Nguyen on 1/3/19.
//

#ifndef PieceTemplate_h
#define PieceTemplate_h
#include <vector>

std::vector< std::pair<int, int> > t_body = { {0,0},{1,0},{1,1},{2,0} };
std::vector< std::pair<int, int> > square_body = { {0,0},{0,1},{1,0},{1,1} };
std::vector< std::pair<int, int> > stick_body = { {1,0},{1,1},{1,2},{1,3} };
std::vector< std::pair<int, int> > leftL_body = { {0,0},{1,0},{1,1},{1,2} };
std::vector< std::pair<int, int> > rightL_body = { {1,0},{1,1},{1,2},{2,0} };
std::vector< std::pair<int, int> > leftDog_body = { {0,1},{1,0},{1,1},{2,0} };
std::vector< std::pair<int, int> > rightDog_body = { {0,1},{1,1},{1,2},{2,2} };

#endif /* PieceTemplate_h */

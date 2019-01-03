CC = g++
CDFLAGS = -Wall -std=c++11

Test1: PieceTest.o Pieces.o
	g++ PieceTest.o Pieces.o -o Test1

Pieces.o:Pieces.cpp Pieces.hpp
	$(CC) -std=c++11 -c Pieces.cpp

PieceTest.o: PieceTest.cpp
	$(CC) -std=c++11 -c PieceTest.cpp

clean:
	-rm PieceTest.o Test1
#ifndef BOARD_H
#define BOARD_H

#include <math.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

class Board
{
private:
    int n;
    string file;
    vector<vector<char> > board;

public:
    struct Cell {
        char val;
        int i;
        int j;
    };

    Board(int N, string output);
    int getN();
    string getOutputFile();
    void generateBoard(int seed);
    void changeN(int N);
    void changeOutputFile(string output);
    char position(int i, int j);
    vector<Cell> arround(int i, int j);

};

#endif // BOARD_H
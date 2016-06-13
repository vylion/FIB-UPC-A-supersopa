#ifndef HASHING_H
#define HASHING_H

#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <vector>
#include "dictionary.h"
#include "board.h"

using namespace std;

int next_prime(int n);
int hash_basic_sum(string s, int n);
int hash_sum(string s, int n);
int hash_read(string s, int n);
void by_bloom(Dictionary & dictionary, Board & board, int hash_method);
bool check_for_word(string s, Board &board, Dictionary &dict, vector<int> &hdict, vector<Board::Cell> v, vector<vector<bool> > &used, const int &hash_method, const int &l);
bool search_word(string s, Dictionary &dict);

#endif // HASHING_H

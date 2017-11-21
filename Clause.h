#ifndef CPROLOG_CLAUSE_H
#define CPROLOG_CLAUSE_H

#include <iostream>
#include <vector>


using namespace std;

class Clause {
public:
    Clause(int len, vector<int> &hgs, int base, int neck, vector<int> &xs);
    int len;
    vector<int> hgs;
    int base;
    int neck;
    vector<int> xs;
};

#endif
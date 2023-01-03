//
//

#ifndef GRAFOKRUSKAL_DISJOINTSETS_H
#define GRAFOKRUSKAL_DISJOINTSETS_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class DisjointSets {
private:
    char *parent, *rnk;
    char n;
public:
    DisjointSets(char n);
    char find(char u);
    void merge(char x, char y);
};


#endif //GRAFOKRUSKAL_DISJOINTSETS_H

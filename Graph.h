//

//

#ifndef GRAFOKRUSKAL_GRAPH_H
#define GRAFOKRUSKAL_GRAPH_H

#include "DisjointSets.h"
#include <iostream>
#include <vector>
#include <algorithm>

typedef pair<char, char> iPair;
class Graph {
private:
    char V;// E;
    vector< pair<int, iPair> > edges;

public:
    Graph(char V);
    void addEdge(char u, char v, int w);
    int kruskalMST();
};


#endif //GRAFOKRUSKAL_GRAPH_H

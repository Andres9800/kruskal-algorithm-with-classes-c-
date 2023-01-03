//
//

#include "DisjointSets.h"

DisjointSets::DisjointSets(char n) {
    this->n = n;
    parent = new char[n+1];
    rnk = new char[n+1];
    for (char i = 0; i <= n; ++i) {
        rnk[i] = 0;
        parent[i] = i;
    }
}

char DisjointSets::find(char u) {
    if (u != parent[u])
        parent[u] = find(parent[u]);
    return parent[u];
}

void DisjointSets::merge(char x, char y) {
    x = find(x), y = find(y);
    if (rnk[x] > rnk[y])
        parent[y] = x;
    else // if rnk[x] <= rnk[y]
        parent[x] = y;

    if (rnk[x] == rnk[y])
        rnk[y]++;
}

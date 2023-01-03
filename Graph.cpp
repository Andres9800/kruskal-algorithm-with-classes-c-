//
//

#include "Graph.h"

Graph::Graph(char V)  {
    this->V = V;

}

//Utility function to add an edge
void Graph::addEdge(char u, char v, int w) {
    edges.push_back({w,{u,v}});
}

int Graph::kruskalMST() {
    int mst_wt = 0;
    sort(edges.begin(), edges.end());
    DisjointSets ds(V); //***sets disjuntos
    vector< pair<int, iPair> >::iterator it;
    for (it = edges.begin(); it != edges.end() ; ++it) {
        char u = it->second.first;
        char v = it->second.second;


        char set_u = ds.find(u);
        char set_v = ds.find(v);
        if (set_u != set_v){
            cout<< u << " - " << v << endl;
            mst_wt += it->first;
            ds.merge(set_u, set_v);
        }
    }
    return mst_wt;
}

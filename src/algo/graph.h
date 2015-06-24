#ifndef GRAPH_H
#define GRAPH_H
#include <vector>
using namespace std;

class Graph{

    private:
        int v,e;
        vector<vector<pair<int, int> > > adjList;


    public:
        Graph(int a, int b);
        vector<vector<pair<int, int> > > & getAdjList();
        int getV();
        int getE();
        void setV(int a);
        void setE(int b);
};
#endif

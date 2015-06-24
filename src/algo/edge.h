#ifndef EDGE_H
#define EDGE_H
#include <iostream>

using namespace std;

class Edge{

    private:
        pair<int, pair<int, int> > edge;
    public:
        Edge();
        Edge(int a, int b, int weight);
        int getFirst();
        void setFirst(int f);
        void setSecond(int s);
        int getSecond();
        int getWeight();
        void setWeight(int w);

};
#endif

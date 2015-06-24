#ifndef EDGE_H
#define EDGE_H
#include "vertex.h"

/*** Weight for future use ***/

class Edge{

    private:
        Vertex *first;
        Vertex *second;
        int weight;

    public:
        Edge(Vertex*, Vertex*);
        void setFirst(Vertex *);
        void setSecond(Vertex *);
        void setWeight(int);
        int getWeight();
        Vertex* getSecond();
        Vertex* getFirst();
};
#endif

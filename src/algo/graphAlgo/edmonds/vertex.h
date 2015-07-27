#ifndef VERTEX_H
#define VERTEX_H
#define EVEN 2
#define ODD 1
#define null 0
#include <iostream>

using namespace std;

class Vertex{
    
    private:
        int uid;
        short label;
        int rank;
        Vertex *pred;
        Vertex *parent;
        Vertex *mate;

        pair<Vertex *, Vertex *> *bridge;
    public:
        bool visited;
        Vertex();
        Vertex(int a);
        int getUid();
        int getRank();
        Vertex *getPred();
        void setUid(int);
        short getLabel();
        Vertex* getParent();
        Vertex* getMate();
        void setMate(Vertex *a);
        void setParent(Vertex *a);
        void setLabel(short a);
        void setPred(Vertex*);
        void setRank(int);
        void setBridge(pair<Vertex *, Vertex *>*);
        pair<Vertex *, Vertex *>*getBridge();
};
#endif

#include "vertex.h"

class Node{

    private:
    Vertex *data;
    Node *parent;
    int rank;

    public:
    Node();
    Node(Vertex *data);
    int getRank();
    Node *getParent();
    Vertex *getData();
    void setData(Vertex *);
    void setParent(Node *);
    void setRank(int);
};

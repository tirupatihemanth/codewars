#include "unionFind.h"

Node::Node(){
    data = NULL;
    parent = this;
    rank=0;
}

Node::Node(Vertex *vx){
    data = vx;
    parent = this;
    rank=0;
}

int Node::getRank(){
    return rank;
}

Node * Node::getParent(){
    return parent;
}

Vertex *Node::getData(){
    return data;
}

void Node::setData(Vertex *vx){
    data = vx;
}

void Node::setParent(Node *node){
    parent = node;
}

void Node::setRank(int a){
    rank=a;
}

#include "Edge.h"


Edge::Edge(Vertex *a, Vertex *b){
    first = a;
    second = b;
    weight=0;
}

void Edge::setFirst(Vertex *a){
    first = a;
}

void Edge::setSecond(Vertex *b){
    second = b;
}

void Edge::setWeight(int a){
    weight = a;
}

int Edge::getWeight(){
    return weight;
}

Vertex* Edge::getSecond(){
    return second;
}

Vertex* Edge::getFirst(){
    return first;
}


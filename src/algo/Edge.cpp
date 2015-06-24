#include "edge.h"

Edge::Edge(){

}

int Edge::getFirst(){
    return edge.first;
}

int Edge::getSecond(){
    return edge.second.first;
}

int Edge::getWeight(){
    return edge.second.second;
}

void Edge::setFirst(int a){
    edge.first = a;
}

void Edge::setSecond(int b){
    edge.second.first = b;
}

void Edge::setWeight(int w){
    edge.second.second = w;
}

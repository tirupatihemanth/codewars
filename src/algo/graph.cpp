#include "graph.h"

Graph::Graph(int a, int b){
    v=a;
    e=b;
}

int Graph::getV(){
    return v;
}

int Graph::getE(){
    return e;
}

void Graph::setE(int a){
    e=a;
}

void Graph::setV(int b){
    v=b;
}

vector<vector<pair<int, int> > > &Graph::getAdjList(){
    return adjList;
}

Edge::Edge(int a, int b, int weight){
    edge.first = a;
    edge.second.first = b;
    edge.second.second = weight; 
}



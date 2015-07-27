#include "vertex.h"

Vertex::Vertex(int a){
    uid=a;
    parent = this;
    rank=0;
    pred=NULL;
    mate = NULL;
    label = null;
    bridge = NULL;
    visited = false;
}

Vertex::Vertex(){
    uid=1000;
    rank=0;
    pred=NULL;
    parent = this;
    mate = NULL;
    label = null;
    bridge = NULL;
    visited = false;
}

void Vertex::setUid(int a){
    uid=a;
}

int Vertex::getUid(){
    return uid;
}

short Vertex::getLabel(){
    return label;
}

Vertex* Vertex::getParent(){
    return parent;
}

Vertex* Vertex::getMate(){
    return mate;
}

void Vertex::setLabel(short a){
    label = a;
}

void Vertex::setParent(Vertex *var){
    parent = var;
}

void Vertex::setMate(Vertex *var){
    mate = var;
}

int Vertex::getRank(){
    return rank;
}

Vertex* Vertex::getPred(){
    return pred;
}

void Vertex::setRank(int a){
    rank = a;
}

void Vertex::setPred(Vertex *var){
    pred = var;
}

void Vertex::setBridge(pair<Vertex*, Vertex*> *b){
    bridge = b;
}

pair<Vertex*, Vertex*>* Vertex::getBridge(){
    return bridge;
}

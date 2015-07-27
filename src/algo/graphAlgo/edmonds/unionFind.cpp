#include "unionFind.h"

Vertex *findvx(Vertex *a){
    if(a!=a->getParent()){
        a->setParent(findvx(a->getParent())); 
        //return findvx(a->getParent());
    }    
    return a->getParent();
}

void link(Vertex *a, Vertex *b){
    if(a->getRank()>b->getRank()){
       b->setParent(a);
    }
    else{
        a->setParent(b);
        if(a->getRank() == b->getRank()){
                b->setRank((b->getRank())+1);
        }
    }
}

void unionvx(Vertex *a, Vertex *b){
    link(findvx(a), findvx(b));
}

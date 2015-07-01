#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <iomanip>
#include "vertex.h"
#include "unionFind.h"
#include <queue>

#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i!=(c).end(); i++
#define present(c,x) ((c).find(x)!=(c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end()

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

queue<Vertex*> q;
Vertex *vx;
vvi adjList;

void insertPath(vector<Vertex*> &path, Vertex *v, Vertex *w){
   

    if(v==w){
        path.push_back(v);
    }
    else if(v->getLabel() == EVEN){
        path.push_back(v);
        path.push_back(v->getMate());
        insertPath(path, v->getMate()->getPred(), w);
    }
    else{
              //going through a blossom
        Vertex *m, *n;
        m = v->getBridge()->first;
        n = v->getBridge()->second;

        path.push_back(v);
        vector<Vertex*> part;
        insertPath(part, m, v->getMate());
        for(int i=((int)part.size())-1;i>=0;i--){
            path.push_back(part[i]);
        }

        insertPath(path, n, w);
    }
}

void shrinkPath(Vertex *b, Vertex *v, Vertex *w){

    Vertex *u = findvx(v);
    pair<Vertex*, Vertex*> *var;
    
    while(u!=b){
        unionvx(u,b);
        u = u->getMate();
        unionvx(u,b);
        q.push(u);
        var = new pair<Vertex*, Vertex*>;
        var->first = v;
var->second = w;
        u->setBridge(var);
        u = findvx(u->getPred());
    }
}

vector<Vertex*> parseAugmentingPath(Vertex *v, Vertex *w){
    
    vector<Vertex*> augPath;
    augPath.push_back(w);
    Vertex *temp = v;
    while(temp->getPred()!=temp){
        temp = temp->getPred();
    }
    insertPath(augPath, v, temp);
    return augPath;
}


void parseBlossom(Vertex *v, Vertex *w){
    
    Vertex *blossomBase;
    set<Vertex*> base;
    Vertex *temp1=v, *temp2=w; 
    while(true){
        if(base.find(temp1->getPred())!=base.end()){
            blossomBase = temp1->getPred();
            break;
        }
        else{
            base.insert(temp1->getPred());
            temp1 = temp1->getPred();
        }
        if(base.find(temp2->getPred()) != base.end()){
            blossomBase = temp2->getPred();
            break;
        }
        else{
            base.insert(temp2->getPred());
            temp2 = temp2->getPred();
        }
    }
    
    shrinkPath(blossomBase, v, w);
    shrinkPath(blossomBase, w, v);
}

void extendTree(Vertex *v, Vertex *w){
    w->setLabel(ODD);
    w->getMate()->setLabel(EVEN);
    w->setPred(v);
    w->getMate()->setPred(w);
    q.push(w->getMate());
}

vector<Vertex*> check(Vertex *v, Vertex *w){
    Vertex *v1 = findvx(v);
    Vertex *w1 = findvx(w);

    if(v1!=w1){
        if(w1->getLabel() == null){
            if(w1->getMate()==NULL){
                //We got an augmenting path
                return parseAugmentingPath(v,w);
            }
            else{
                //We got a blossom i.e an odd cycle hence we need to parse this blossom before to find augPath
                extendTree(v,w);
            }
        }
        else if(w1->getLabel() ==  EVEN){
            parseBlossom(v,w); 
        }
    }
    vector<Vertex*> augPath;
    return augPath;
}


vector<Vertex*> constructTree(Vertex *v){
    v->setLabel(EVEN);
    q.push(v);
    Vertex *temp;
    vector<Vertex*> augPath;

    int i;
    while(!q.empty()){
         temp = q.front();
         q.pop();
         for(i=0;i<(int)adjList[temp->getUid()].size();i++){
            augPath = check(temp, vx+adjList[temp->getUid()][i]);
            if(augPath.size()!=0){
                return augPath; 
            } 
         }
    }
    return augPath;
}

void correctMatching(vector<Vertex*> &augPath){
        
    for(int i=0;i<(int)(augPath.size())-1;i+=2){
        augPath[i]->setMate(augPath[i+1]);
        augPath[i+1]->setMate(augPath[i]);
    }

}

int main(){

/**********************************/    
    cout<<"***** I/O Format *****"<<endl;
    cout<<"\nInput:\n"<<endl;
    cout<<"n m //Number of vertices(n) Number of edges(m)"<<endl;
    cout<<"ZERO BASED INDEXING for edges i.e vertices are represented by numbers from 0 to n-1"<<endl;

    cout<<"\nOutput:\n"<<endl;
    cout<<"Edges Which form the part of the matching\n"<<endl;

 /**************************************************/

    int n,m;
    cin>>n>>m;

    
    vx = new Vertex[n];

    int i, var1, var2;

    for(i=0;i<n;i++){
        vx[i].setUid(i);    
    }

    adjList.resize(n);
    for(i=0;i<m;i++){
        cin>>var1>>var2;
        adjList[var1].push_back(var2);
        adjList[var2].push_back(var1);
    }
    
    clock_t before = clock();
    /*** Getting Maximal Matching Greedily with edges in matching set as their mates***/

    bool *match = new bool[n];
    for(i=0;i<n;i++){
        match[i] = false;
    }
    
    for(i=0;i<n;i++){
        if(vx[i].getMate()==NULL){
            var1 = 0;
            while(var1<(int)adjList[i].size()){
                if(vx[adjList[i][var1]].getMate() == NULL){
                    vx[adjList[i][var1]].setMate(&vx[i]);
                    vx[i].setMate(&vx[adjList[i][var1]]);
                    break;
                }
                var1++;
            }
        }
    }

    vector<Vertex*> augPath;
    for(i=0;i<n;i++){
        if(vx[i].getMate() == NULL){
            augPath = constructTree(vx+i);
            if(augPath.size()!=0){
                correctMatching(augPath);
                augPath.clear();
            }
        }
    }
    
    /*
    for(i=0;i<(int)augPath.size();i++){
        cout<<augPath[i]->getUid()<<endl;
    }
    */



    clock_t after = clock();

    cout<<endl;
    for(i=0;i<n;i++){
        if(vx[i].getMate()!=NULL && vx[i].getUid()<vx[i].getMate()->getUid()){
            cout<<vx[i].getUid()<<" "<<vx[i].getMate()->getUid()<<endl;
        }
    }

    double diff = (double)(after-before)/CLOCKS_PER_SEC;
    cout<<"Time Taken: "<<diff<<endl;
    return 0;
}

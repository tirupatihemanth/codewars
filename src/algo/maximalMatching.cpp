#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <iomanip>
#include "graph.h"
#include "edge.h"

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

/**** Used Zero Based Indexing For Graphs ****/

bool mySort(Edge &a, Edge &b){
    return a.getWeight()>b.getWeight();
}

int main(){
    
    int n,m;

    cin>>n>>m;
    Graph graph(n,m);
    
    int i,v1, v2, w;
    graph.getAdjList().resize(n);
    vector<Edge> edgeList(m);
    Edge edge;
    
    for(i=0;i<n;i++){
        cin>>v1>>v2>>w;
        edge.setFirst(v1);
        edge.setSecond(v2);
        edge.setWeight(w);
        edgeList.push_back(edge);
        graph.getAdjList()[v1].push_back(make_pair(v2,w));
        graph.getAdjList()[v2].push_back(make_pair(v1,w));
    }


    sort(edgeList.begin(), edgeList.end(), mySort);
    vector<Edge> maximalMatching;
    set<int> vertexSet;

    for(i=0;i<edgeList.size();i++){
        if(vertexSet.find(edgeList[i].getFirst())==vertexSet.end() && vertexSet.find(edgeList[i].getSecond()) == vertexSet.end()){
            vertexSet.insert(edgeList[i].getFirst());
            vertexSet.insert(edgeList[i].getSecond());
            maximalMatching.push_back(edgeList[i]);
        }
    }

    /**** This maximalMatching gives maximal Matching with maximal edge weights ****/

    /**** Maximum Matching algorithm below ****/


    return 0;
}

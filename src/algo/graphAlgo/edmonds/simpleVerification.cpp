#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <cstring>
#include <climits>


#define FOR(i,l,r) for(auto i=l;i<=r;i++)
#define REP(i,l,r) for(auto i=l;i<r;i++)
#define FORD(i,l,r) for(auto i=l;i>=r;i--)
#define REPD(i,l,r) for(auto i=l;i>r;i--)
#define ENDL cout<<endl
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define tr(c,i) for(auto i = (c).begin(); i!=(c).end(); i++)
#define present(c,x) ((c).find(x)!=(c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

int main(){
    
    /************************************************/
    cout<<"This verification verfies if there is any vertex which got matched twice.\nThis verfication checks if there are any adjacent vertices and non of them got matched"<<endl;
    
    cout<<"Input Format"<<endl;
    cout<<"Number of vertices Number of edges"<<endl;
    cout<<"Followed by edges and then edges in the matching"<<endl;
    cout<<"Example input file facebook.txt is in edmonds\n"<<endl;
    /************************************************/


    int var1,var2,n,m;
    set<int> vertices;
    cin>>n>>m;
    vector<vector<int> > adjList(n);
    bool *matched = new bool[n];

    while(m--){
        cin>>var1>>var2;
        adjList[var1].push_back(var2);//assuming graph is directed
    }

    while(cin>>var1>>var2){
        
        matched[var1]=matched[var2]=true;
        
        if(vertices.find(var1)!=vertices.end()){
            cout<<"Incorrect Matching"<<endl;
            return 0;
        }

        vertices.insert(var1);
        if(vertices.find(var2)!=vertices.end()){
            cout<<"Incorrect Matching"<<endl;
            return 0;
        }
        vertices.insert(var2);
    }
    
    REP(i,0,n){
        if(!matched[i]){
            tr(adjList[i],it){
                if(!matched[*it]){
                    cout<<"Incorrect Matching"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"Verification Passed"<<endl;
    return 0;
}


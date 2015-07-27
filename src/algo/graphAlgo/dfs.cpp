#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <iomanip>
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

vector<int> *arr;
int n,m;
short *colour;
int *parent;
int *st, *ft;
int t=0;
//0 colour for black, 1 for gray and 2 for white
// actually we don't need two colours just two are sufficient for doing only a dfs
//If the graph is undirected then every edge is a tree edge or back edge no point of others

void dfs(int v){
    st[v]=t++;
    colour[v] = 1
    tr(arr[v],it){
        if(colour[*it]==0){
            // This is a tree edge
            parent[*it]= v;
            dfs(*it);
        }
        else if (colour[*it] == 1){
            // This is a back edge which says that there is a cycle in directed graphs
        }
        else{
            // Here if st[*it] > st[v] then it's a forward edge else cross edge
        }
    }
    colour[v] = 2;
    ft[v] = t;
}

int main(){
    
    int var1,var2;
    cin>>n>>m;
    arr = new vector<int>[n];
    colour = new short[n];
    parent = new int[n];
    st = new int[n];
    ft = new int[n];

    fill(parent, parent+n, -1); 
    
    REP(i,0,m){
        
        cin>>var1>>var2;
        arr[var1].push_back(var2); 
        arr[var2].push_back(var1); //If the graph is undirected else comment out
    }

     
    return 0;
}


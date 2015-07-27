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
short *colour;
int n,m;
int *height, *low, *par;

void dfs(int v){
   
    low[v] = height[v];
    colour[v] = 1; //for gray
    bool cutVertex=false;
    REP(i,0,arr[v].size()){
        if(colour[arr[v][i]]==0){
            par[arr[v][i]]=v;
            height[arr[v][i]]=height[v]+1;
            dfs(arr[v][i]);
            low[v] = min(low[v], low[arr[v][i]]);
            if(low[arr[v][i]]>=height[v]){
                cutVertex = true;
            }
        }
        else if(par[v]!=arr[v][i]){
            low[v] = min(low[v], height[arr[v][i]]);
        }
    }
    
    colour[v] = 2;
    if((par[v]!=-1 && cutVertex) || (par[v]==-1 && arr[v].size()>1)){
        cout<<v<<endl;
        //prints all the articulation points
    }

}

int main(){
    
    int var1,var2;
    cin>>n>>m;
    arr = new vector<int>[n];
    height = new int[n];
    low = new int[n];
    colour = new short[n];
    par = new int[n];
    fill(par, par+n, -1);

    REP(i,0,m){
        cin>>var1>>var2;
        arr[var1].push_back(var2);
        arr[var2].push_back(var1); 
    }

    //If it's a connected graph just start dfs at a vertex else loop around checking their colours
 
    height[0]=0;
    dfs(0);
    return 0;
}


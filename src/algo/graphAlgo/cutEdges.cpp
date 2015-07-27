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
bool *colour;
int *height, *low, *par;
int n,m;

void dfs(int v){
    colour[v]=true;

    low[v] = height[v];
    
    tr(arr[v],it){
        if(colour[*it]==false){
            par[*it] = v;
            height[*it] = height[v]+1;
            dfs(*it);
            if(low[*it]>height[v]){
                cout<<v<<" "<<*it<<endl;    
            }
            low[v] = min(low[v], low[*it]);
        }
        else if(par[v]!=*it){
            low[v] = min(low[*it],low[v]);    
        }
    }
}

int main(){
    
    int var1,var2;
    cin>>n>>m;
    arr = new vector<int>[n];
    par = new int[n];
    colour = new bool[n];
    height = new int[n];
    low = new int[n];
    
    REP(i,0,m){
        cin>>var1>>var2;
        arr[var1].push_back(var2);
        arr[var2].push_back(var1);
    }
    height[0]=0;

    dfs(0);
    return 0;
}


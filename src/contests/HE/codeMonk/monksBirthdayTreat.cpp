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

vector<int> adjList[1001];
bool visited[1001];


int dfs(int i, int sum){
    visited[i] = true;
    sum++;
    int temp = INT_MAX;
    REP(j,0,adjList[i].size()){
        if(!visited[adjList[i][j]]){
            temp = min(temp,dfs(adjList[i][j],sum));
        }
    }
    visited[i] = false;
    if(temp == INT_MAX){
        return sum;
    }
    else{
        return temp;
    }
}

int main(){
    
    int n,d,var1,var2;
    cin>>n>>d;
    REP(i,0,d){
        cin>>var1>>var2;
        adjList[var1].push_back(var2);
    }

    int max=INT_MAX;
    FOR(i,1,n){
        var1 = dfs(i,0);
        if(var1<max){
            max = var1;
        }
    }
    cout<<max<<endl;
    return 0;
}


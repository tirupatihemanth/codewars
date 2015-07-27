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

bool visited[100001];
vector<int> adjList[100001];
int arr[100001];

long long int dfs(int i, long long int sum){
    visited[i] = true;
    sum+=arr[i];
    REP(j,0,adjList[i].size()){
        if(!visited[adjList[i][j]]){
            sum = dfs(adjList[i][j],sum);
        }
    } 
    return sum;
}

int main(){
    int T,n,m,var1,var2;
    cin>>T;
    while(T--){
        cin>>n>>m;

        REP(i,0,m){
            cin>>var1>>var2;
            adjList[var1].push_back(var2);
            adjList[var2].push_back(var1);
        }
        
        FOR(i,1,n){
            cin>>arr[i];
        }
        
        long long int maxVal=0,temp;
        FOR(i,1,n){
            if(!visited[i]){
                  temp=dfs(i,0);
                  if(temp>maxVal){
                    maxVal = temp;
                  }
            }
        }
        cout<<maxVal<<endl;    
        
        FOR(i,1,n){
            adjList[i].clear();
        }

        memset(visited, 0, sizeof(bool)*(n+1));
        memset(arr,0,sizeof(int)*(n+1));
    }

    return 0;
}


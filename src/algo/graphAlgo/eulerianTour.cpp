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

//Remember that Eulerian circuit exists only if degree of all the vertices is even so first check it which is easy

//Then if there are only two vertices with odd degree then start from one of them and you will surely end at the other of them

//Here's is an algo for finding the Eulerian tour given that we have an eulerian tour i.e all edges are of even degree

vector<int > *arr;

vector<int> tour;

void dfs(int v){
    int temp;
    for(auto it = arr[v].begin();it!=arr[v].end();){
        temp = (*it);
        arr[v].erase(it);
        arr[temp].erase(find(arr[temp].begin(), arr[temp].end(),v));
        dfs(temp);
    }

    tour.push_back(v);
}

int main(){
    
    int n,m;
    int var1, var2;
    cin>>n>>m;

    arr = new vector<int >[n];

    REP(i,0,m){
        cin>>var1>>var2;
        arr[var1].push_back(var2);
        arr[var2].push_back(var1);
    }
    //If eulerian tour exists then you can start at any vertex but if it doesn't exist then all you have to do is you have to get one of the two odd vertices and call dfs(thatVertex)

    dfs(0); 
    tr(tour,it)cout<<*it<<" ";
    ENDL;
    return 0;
}


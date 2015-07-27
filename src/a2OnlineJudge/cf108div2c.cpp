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

int N=1000000007;
int main(){

    int n,m;
    cin>>n>>m;
    char ch;
    vector<set<char> >val(m);

    REP(i,0,n){
        REP(j,0,m){
            cin>>ch;
            val[j].insert(ch); 
        }
    }

    long long int ans=1;
    

    REP(i,0,m){
        ans = ((ans%N)*(val[i].size()%N))%N;
    }

    cout<<ans<<endl; 
    return 0;
}


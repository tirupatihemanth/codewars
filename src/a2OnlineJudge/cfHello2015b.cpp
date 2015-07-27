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

int var = 1000000007;
int main(){

    int n,q;
    cin>>n>>q;
    long long int *f = new long long int[n+1];
    cin>>f[1]>>f[2];
    int a,b;
    cin>>a>>b;
    long long int *arr = new long long int[n+1];
    long long int *update = new long long int [n+1];

    FOR(i,1,n){
        cin>>arr[i];
    }

    int l,r;


    FOR(i,3,n){
        f[i] = ((a*f[i-2])%var+(b*f[i-2])%var)%var;        
    }
    

    FOR(i,0,q){
        cin>>l>>r;
        
    }    
    return 0;
}


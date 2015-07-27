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

char arr[10][10];
int n,m;

bool check(int i, int j){
    if(i>0 && arr[i-1][j]=='P'){
        return true;
    }    

    if(j>0 && arr[i][j-1] == 'P'){
        return true;   
    }
    if(i<n-1 && arr[i+1][j] == 'P'){
        return true;   
    }
    
    if(j<m-1 && arr[i][j+1] == 'P'){
        return true;   
    }

    return false;
    
}

int main(){
    cin>>n>>m;
    char var;

    REP(i,0,n){
        REP(j,0,m){
            cin>>arr[i][j];
        }
    }

    int ans=0;
    REP(i,0,n){
        REP(j,0,m){
            if(arr[i][j]=='W' && check(i,j)){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}


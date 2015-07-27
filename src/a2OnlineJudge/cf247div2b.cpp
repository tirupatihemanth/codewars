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

int arr[6] = {0,1,2,3,4,5};
int g[6][6];
int main(){
    
    FOR(i,1,5){
        FOR(j,1,5){
            cin>>g[i][j];
        }
    }

    int maxVal = 0;
    do{
        maxVal = max(maxVal, g[arr[1]][arr[2]]+g[arr[2]][arr[1]]+g[arr[2]][arr[3]]+g[arr[3]][arr[2]]+2*g[arr[3]][arr[4]]+2*g[arr[4]][arr[3]]+2*g[arr[4]][arr[5]] + 2*g[arr[5]][arr[4]]);
    }
    while(next_permutation(arr+1, arr+6));
    cout<<maxVal<<endl;
    return 0;
}


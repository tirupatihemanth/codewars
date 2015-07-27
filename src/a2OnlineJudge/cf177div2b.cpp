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

int arr[10001];
int main(){

    int n,m,d;
    cin>>n>>m>>d;
    int var;
    cin>>arr[1];
    var= arr[1]%d;
    FOR(i,2,n*m){
        cin>>arr[i];
        if(var!=arr[i]%d){
            cout<<-1<<endl;
            return 0;
        }
    }

    sort(arr+1, arr+n*m+1);
    int median = arr[(n*m)/2+1];
    int ans=0;
    FOR(i,1,n*m){
        ans+=abs(median-arr[i]);
    }
    cout<<ans/d<<endl;
    return 0;
}


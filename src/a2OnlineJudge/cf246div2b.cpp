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
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i!=(c).end(); i++
#define present(c,x) ((c).find(x)!=(c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end()

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

int cnt1[100000];
int main(){
    
    int n;
    cin>>n;
    vector<pair<int,int> > arr(n);
    vector<pair<int,int> > ans(n);
    pair<int, int> var(n-1,n-1);
    fill(ans.begin(), ans.end(), var);

    REP(i,0,n){
        cin>>arr[i].first>>arr[i].second;
        cnt1[arr[i].first]++;
    }
    
    REP(i,0,n){
        ans[i].first+=cnt1[arr[i].second];
        ans[i].second-=cnt1[arr[i].second];
    }

    REP(i,0,n){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    return 0;
}


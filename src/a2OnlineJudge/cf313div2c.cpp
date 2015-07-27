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

int main(){

    int i,arr[6];
    int var1,var2=0;
    cin>>arr[0];
    var1=arr[0];
    set<int> brr;
    brr.insert(arr[0]);
    for(i=1;i<6;i++){
        cin>>arr[i];
        brr.insert(arr[i]);
        if(var2!=arr[i]){
            var2=arr[i];
            i++;
            break;
        }   
    }
    

    for(;i<6;i++){
        brr.insert(arr[i]);
        cin>>arr[i];
        
    }
        
    int ans=0;
    REP(i,0,6){
        ans+=arr[i]*arr[i];
    }
    ans-=2*(var1-var2)*(var1-var2);

    cout<<ans<<endl;
    return 0;
}


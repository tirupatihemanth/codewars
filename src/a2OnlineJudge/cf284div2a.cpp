#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <iomanip>


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

int main(){

    int n, x;
    cin>>n>>x;

    vector<pair<int,int> > arr(n);

    int i, j,k;
    
    for(i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    
    sort(arr.begin(), arr.end());
    int cur=1;
    
    int ans=0;
    for(i=0;i<n;i++){
        cur = cur+x*((arr[i].first-cur)/x);
        ans+=arr[i].first-cur+arr[i].second-arr[i].first+1;
        cur = arr[i].second+1;
    }

    cout<<ans<<endl;
    return 0;
}

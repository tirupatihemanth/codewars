#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <iomanip>
#include <climits>

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

    int n,k;
    cin>>n>>k;
    int *f = new int[n];
    int *t = new int[n];

    int i;

    for(i=0;i<n;i++){
        cin>>f[i]>>t[i];
    }
    int ans = INT_MIN;

    for(i=0;i<n;i++){
        ans = max(ans, t[i]>k?f[i]-(t[i]-k):f[i]);    
    }
    cout<<ans<<endl;
    return 0;
}

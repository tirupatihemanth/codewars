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

    int n;
    cin>>n;
    vector<int> arr(n);

    int i, ans = INT_MAX;

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int j; 
    for(i=0;i<n-2;i++){

        if(ans> arr[i+2]-arr[i]){
            ans = arr[i+2]-arr[i];
            j=i+1;
        }
    //    ans = min(ans, arr[i+2]-arr[i]);
    }
    
    arr.erase(arr.begin()+j);
    ans = INT_MIN;
    for(i=0;i<n-2;i++){
        ans = max(ans, arr[i+1]-arr[i]);
    }
    cout<<ans<<endl;
    return 0;
}

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

    int n,i;
    cin>>n;
    vector<int> arr(n);
    int max = INT_MIN, min = INT_MAX, idx1=0, idx2=0;
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            idx1 = i;
            max = arr[i];
        }
        if(arr[i]<=min){
            idx2 = i;
            min = arr[i];
        }
    }
    int ans=0;
    if(idx1!=0){
        ans=idx1;
    }

    if(idx2!=n-1){
        if(idx2>idx1){
            ans+=(n-1-idx2);
        } 
        else{
            ans+=(n-2-idx2);
        }
    }
    cout<<ans<<endl;
    return 0;
}

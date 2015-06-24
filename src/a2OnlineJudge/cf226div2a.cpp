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
    
    int n,k;
    cin>>n>>k;
    int arr[100];

    int i, j;

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int ans=0;
    for(i=0;i<n-1;i++){
        ans = max(arr[i]-arr[i+1],ans);
    }
    if(ans<k){
        cout<<0<<endl;
    }
    else
        cout<<ans-k<<endl;
    return 0;
}

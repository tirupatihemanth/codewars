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

    int n,m;
    cin>>n>>m;

    int *arr = new int[m];

    int i;
    for(i=0;i<m;i++){
        cin>>arr[i];
    }
    
    int cur=1;
    long long int ans=0;
    for(i=0;i<m;i++){
        if(arr[i]>=cur){
            ans+=(arr[i]-cur);
            cur = arr[i];
        }
        else{
            ans+=(n-cur+1)+arr[i]-1;
            cur = arr[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}

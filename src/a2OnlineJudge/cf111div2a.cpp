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

    int n,i, sum1=0, sum2=0;
    int arr[100];

    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
        sum1+=arr[i];
    }
    
    sort(arr, arr+n);
    for(i=n-1;i>=0;i--){
        sum1-=arr[i];
        sum2+=arr[i];
        if(sum2>sum1){
            cout<<n-i<<endl;
            return 0;
        }
    }

    cout<<n<<endl;
    return 0;
}

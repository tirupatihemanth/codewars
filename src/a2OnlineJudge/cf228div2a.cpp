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
    
    bool change = false;

    int n;
    cin>>n;
    int arr[100];

    int i, j, k;

    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    while(true){
        
        sort(arr, arr+n);
        for(i=n-1;i>0;i--){
            if(arr[i]>arr[i-1]){
                change = true;
                arr[i] = arr[i]-arr[i-1];
            }
        }
        
        if(!change){
            break;
        }
        change = false;
    }

    cout<<arr[0]*n<<endl;
    return 0;
}

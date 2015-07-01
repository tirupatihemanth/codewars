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

    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);


    int var,ans = arr[0];

    arr[1] = arr[1]-arr[0];
    arr[2] = arr[2]-arr[0];

    while((arr[1]>1 || arr[2]>1) && arr[1]!=0 && arr[2]!=0){
        if(arr[1]>arr[2]){
            var = arr[1]; 
            arr[1] = arr[2];
            arr[2] = var;
        }
        arr[1]--;
        arr[2]-=2;
        ans++;
    }
    
    cout<<ans<<endl;
    return 0;
}

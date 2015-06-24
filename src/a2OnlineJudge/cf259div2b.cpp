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

using namespace std;

int main(){
        
    int n;
    cin>>n;
    int *arr = new int[n];
    
    int i, val = INT_MIN, idx = -1;

    for(i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>=val){
            idx = i;
            val = arr[i];
        }
    }

    int *blah = new int[n];
    
    if(idx == n-1 && arr[idx] == arr[0]){
        for(i=0;i<n;i++){
            if(arr[idx]==arr[i]){
                continue;    
            }
            else{
                break;
            }
        }
        idx=i-1;
    }
    
        int j=0;
        for(i=idx+1;i<n;i++, j++){
            blah[j] = arr[i];
        }

        for(i=0;i<idx+1;i++,j++){
            blah[j] = arr[i];
        }
    
    sort(arr, arr+n);

    for(i=0;i<n;i++){
        if(blah[i]!=arr[i]){
            cout<<-1<<endl;
            return 0;
        }
    }

    cout<<n-(idx+1)<<endl;
}

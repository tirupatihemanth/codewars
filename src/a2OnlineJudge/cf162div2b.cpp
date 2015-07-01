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
    
    int n;
    cin>>n;
    int *arr = new int[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=0;
    int prev=0;
    for(int i=0;i<n-1;i++){
        ans+=(arr[i]-prev)+2;
        if(arr[i+1]<arr[i]){
            ans+=arr[i]-arr[i+1];
            prev = arr[i+1];
        }   
        else{
            prev = arr[i];
        }
    }
    
    ans+=arr[n-1]-prev+1;
    cout<<ans<<endl;
    return 0;
}

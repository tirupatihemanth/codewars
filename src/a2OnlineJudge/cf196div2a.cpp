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
    
    int n, m;
    cin>>n>>m;
    int arr[50];
    int i,j;

    for(i=0;i<m;i++){
        cin>>arr[i];
    }
    
    sort(arr, arr+m);
    int diff=INT_MAX;
    for(i=0;i<=m-n;i++){
        if(arr[i+n-1]-arr[i]<diff){
            diff = arr[i+n-1]-arr[i];
        }
    }
    
    
    
    cout<<diff<<endl;
    return 0;
}

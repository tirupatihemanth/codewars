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

    int s,n;
    cin>>s>>n;
    
    vector<pair<int,int> > arr(n);
    int i,j;

    for(i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr.begin(), arr.end());

    int level=1;
    i=0;

    while(s>0 && level<=n){
        
        if(s<=arr[i].first){
            cout<<"NO"<<endl;
            return 0;
        }
        
        s = s+arr[i].second;
        i++;
        level++;
    }
    cout<<"YES"<<endl;
    return 0;
}

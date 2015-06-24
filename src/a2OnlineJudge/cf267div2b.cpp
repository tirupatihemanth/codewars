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

    int n, m, k;
    cin>>n>>m>>k;
    m++;

    int *arr = new int[m];

    int j, i;
    for(i=0;i<m;i++){
        cin>>arr[i];
    }
    int var,ans=0;
    for(i=0;i<m-1;i++){
        var=0;
        for(j=0;j<n;j++){
            if(((1<<j)&arr[m-1]) ^ ((1<<j)&arr[i])){
                var++;        
            }    
        }
        if(var<=k){
            ans++;
        }
        var=0;
    }
    cout<<ans<<endl;
    return 0;
}

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
    string arr[100];
    
    int i,j,sum;

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<arr[i].size();j++){
            if(arr[i][j] == '4' || arr[i][j] == '7'){
                sum++;
            }
        }
        if(sum<=k){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}

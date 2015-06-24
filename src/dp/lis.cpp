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

    int *arr = new int[n+1];
    int *dp = new int[n+1];
    int i,j;
    
    for(i=1;i<=n;i++){
        cin>>arr[i];
        dp[i]=1;
    }

    for(i=2;i<=n;i++){
        for(j=1;j<i;j++){
            if(arr[j]<arr[i] && dp[j]+1>dp[i]){
                dp[i] = dp[j]+1;
            }
        }
    }

    cout<<dp[n]<<endl;

    
    return 0;
}

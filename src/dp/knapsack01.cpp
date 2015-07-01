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
    
    int n,W;
    cin>>n>>W;

    int *w = new int[n+1];
    int *v = new int[n+1];
    int i,j;

    for(i=1;i<=n;i++){
        cin>>w[i];
    }

    for(i=1;i<=n;i++){
        cin>>v[i];
    }

    int  **dp = new int *[W+1];

    for(i=0;i<=W;i++){
        dp[i] = new int[n+1];
    }

    for(i=0;i<=W;i++){
        for(j=0;j<=n;j++){
            dp[i][j]=0;
            dp[i][j]=0;
        }
    }
    
    for(i=1;i<=W;i++){
        for(j=1;j<=n;j++){
            if(w[j]<=i){

                dp[i][j] = max(dp[i-w[j]][j-1]+v[j], dp[i][j-1]);
            }
            else{
                dp[i][j] = dp[i][j-1];
            }
        }
    }
    cout<<dp[W][n]<<endl;
    return 0;
}

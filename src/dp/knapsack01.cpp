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

    pair<int,int> **dp = new pair<int,int>*[W+1];

    for(i=0;i<=W;i++){
        dp[i] = new pair<int,int>;
    }

    for(i=0;i<=W;i++){
        for(j=0;j<=n;j++){
            dp[i][j].first=0;
            dp[i][j].second=0;
        }
    }
    
    for(i=1;i<=W;i++){
        for(j=1;j<=n;j++){
            if(dp[i][j].first+w[j]<=i){

                if(dp[i-w[j]][j-1].second+v[j]>dp[i][j].second){
                    dp[i][j].first+=w[j];
                    dp[i][j].second = dp[i-w[j]][j-1].second+v[j];
                }
            }
            else{
                dp[i][j].second = dp[i][j-1].second;
            }
        }
    }
    cout<<dp[W][n].second<<endl;
    return 0;
}

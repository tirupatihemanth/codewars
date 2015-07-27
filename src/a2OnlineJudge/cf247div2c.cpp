#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <iomanip>
#include <cstring>
#include <climits>

#define FOR(i,l,r) for(auto i=l;i<=r;i++)
#define REP(i,l,r) for(auto i=l;i<r;i++)
#define FORD(i,l,r) for(auto i=l;i>=r;i--)
#define REPD(i,l,r) for(auto i=l;i>r;i--)
#define ENDL cout<<endl
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define tr(c,i) for(auto i = (c).begin(); i!=(c).end(); i++)
#define present(c,x) ((c).find(x)!=(c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

long long int dp[101][101];
long long int var = 1000000007;
int main(){

    int n,k,d;
    cin>>n>>k>>d;
    FOR(i,1,n){
        FOR(j,1,n){

            FOR(m,1,min(j-i+1,k)){
                if(m==j){
                    dp[i][j]++;
                }
                else{
                    dp[i][j]+= dp[i-1][j-m];
                    if(dp[i][j]>=var){
                        dp[i][j]%=var;
                    }
                }
            }
        }
    }

    int ans=0;
    FOR(i,1,n){
        ans+=dp[i][n];
        if(ans>=var){
            ans%=var;
        }
    }

    memset(dp, 0, sizeof(dp));
    
    FOR(i,1,n){
        FOR(j,1,n){
            FOR(m,1,min(j-i+1,d-1)){
                if(m==j){
                    dp[i][j]++;
                }
                else{
                    dp[i][j]+=dp[i-1][j-m];
                    if(dp[i][j]>=var){
                        dp[i][j]%=var;
                    }
                }
            }
        }
    }

    FOR(i,1,n){
        ans-=dp[i][n];
        if(ans<0){
            ans+=var;
        }
    }
    cout<<ans<<endl;
    return 0;
}


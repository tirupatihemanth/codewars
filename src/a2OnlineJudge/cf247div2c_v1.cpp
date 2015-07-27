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

long long int dp[101];
long long int var = 1000000007;
int main(){

    int n,k,d;
    cin>>n>>k>>d;
    dp[0]=1;
    FOR(i,1,n){
        FOR(j,1,min(i,k)){
            dp[i]+=dp[i-j];
            if(dp[i]>=var){
                dp[i]%=var;
            }
        }   
    }

    long long int ans=dp[n];
    
    memset(dp, 0, sizeof(dp));

    dp[0]=1;
    FOR(i,1,n){
        FOR(j,1,min(i,d-1)){
            dp[i]+=dp[i-j];
            if(dp[i]>=var){
                dp[i]%=var;
            }
        }
    }
    ans-=dp[n];
    if(ans<0){
        ans+=var;
    }
    cout<<ans<<endl;
    return 0;
}


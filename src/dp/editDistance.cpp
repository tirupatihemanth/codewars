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
    
    string str1, str2;
    cin>>str1>>str2;

    int m = str1.size();
    int n = str2.size();

    int **dp = new int*[m+1];
    int i,j;

    for(i=0;i<=m;i++){
        dp[i] = new int[n+1];
    }
    
    int sum=0;

    for(i=0;i<=n;i++){
        dp[0][i]=i;
    }

    for(i=0;i<=m;i++){
        dp[i][0]=i;
    }

    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if(str1[i-1] == str2[j-1]){
                dp[i][j] = dp[i-1][j-1];           
            }
            else{
                dp[i][j] = min(dp[i-1][j], min(dp[i-1][j-1],dp[i][j-1]))+1;
            }
        }
    }

    return 0;
}

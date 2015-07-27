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
#define M_PI 3.14159265358979323846
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

int arr[100];
int main(){
    int n;
    cin>>n;
    REP(i,0,n){
        cin>>arr[i];
    }

    sort(arr, arr+n);
    double var, ans = 0;
    bool flag = true;
    FORD(i,n-1,0){
        var = pow(arr[i],2);
        if(!flag){
            var = -var;
        }   
        ans+=var;
        flag = (!flag);
    }
    ans*=M_PI;
    cout<<ans<<endl;
    return 0;
}


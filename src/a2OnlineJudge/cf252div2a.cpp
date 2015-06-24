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

    int n, v;
    int ans=0;
    int i, var1, var2;
    bool flag;
    cin>>n>>v;
    stringstream strm;
    for(i=1;i<=n;i++){
        cin>>var1;
        flag  = false;
        while(var1--){
            cin>>var2;
            if(flag){
                continue;
            }
            if(!flag && var2<v){
                ans++;
                strm<<i<<" ";
                flag = true;
            }
        }
    }
    cout<<ans<<endl;
    cout<<strm.str()<<endl;
    return 0;
}

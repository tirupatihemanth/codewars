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
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(n); i!=(c).end(); i++
#define present(c,x) ((c).find(x)!=(c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end()

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

int main(){

    int n, m, a, b;
    cin>>n>>m>>a>>b;
    int ans;
    
    if(m*a<=b){
        cout<<n*a<<endl;
    }
    else{
        ans = (n/m)*b;
        ans += min((n%m)*a, b);
        cout<<ans<<endl;
    }

    return 0;
}

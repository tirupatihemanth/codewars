#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <iomanip>
#include <climits>

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

    int a,b,c;
    cin>>a>>b>>c;
    int ans = INT_MIN;
    if(ans<a+b+c){
        ans = a+b+c;
    }

    if(ans<a*b*c){
        ans=a*b*c;
    }

    if(ans<a+b*c){
        ans = a+b*c;
    }

    if(ans<(a+b)*c){
        ans = (a+b)*c;
    }

    if(ans<a*b+c){
        ans = a*b+c;
    }

    if(ans<a*(b+c)){
        ans = a*(b+c);
    }

    cout<<ans<<endl;
    return 0;
}

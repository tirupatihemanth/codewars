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

int arr[100001];
bool visit[100001] = {false};
int main(){
    int n,s,t;
    cin>>n>>s>>t;

    int i;
    for(i=1;i<=n;i++){
        cin>>arr[i];
    }
    int ans =0;
    while(s!=t){
        
        if(visit[s]){
            ans = -1;
            break;
        }
        visit[s] = true;
        s = arr[s];
        ans++;
    } 
    cout<<ans<<endl;
    return 0;
}

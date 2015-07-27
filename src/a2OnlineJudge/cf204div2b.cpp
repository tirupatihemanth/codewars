#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <queue>
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


int last[100001];
int diff[100001];

int main(){
    
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int> arr(n+1);

    FOR(i,1,n){
        cin>>arr[i];
        if(diff[arr[i]]>0){
            if(i-last[arr[i]]==diff[arr[i]]){
                last[arr[i]]=i;
            }
            else{
                diff[arr[i]]=-1;    
            }
        } 
        else if(diff[arr[i]]==0){
            if(last[arr[i]]==0){
                last[arr[i]]=i;
            }
            else{
                diff[arr[i]]=i-last[arr[i]];
                last[arr[i]]=i;
            }
        }
    }
    
    int ans=0;
    FOR(i,1,100000){
        if(diff[i]>=0 && last[i]>0){
            ans++;
        }
    }

    cout<<ans<<endl;

    FOR(i,1,100000){
        if(diff[i]>=0 && last[i]>0){
            cout<<i<<" "<<diff[i]<<endl;
        }
    }

    return 0;
}


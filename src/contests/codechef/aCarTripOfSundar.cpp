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




vector<pair<int, pair<int, int> > > arr(100000);

int main(){

    int T, n , l, d;
    cin>>T;
    bool flag;
    int var, var1,ans;
    while(T--){
        cin>>n>>l>>d;
        flag = true;
        REP(i,0,n){
            cin>>arr[i].first>>arr[i].second.first;
            arr[i].second.second = INT_MAX;
        }
        
        sort(arr.begin(), arr.begin()+n); 
        arr[0].second.second=0;  
        for(int i=0;i<n;i++){

            var = arr[i].second.second;
            if(var == INT_MAX){
                cout<<"NO"<<endl;
                flag = false;
                break;
            }
            
            var1 = i+1;   
            while(var1<n && arr[var1].first-arr[i].first<=d){

                arr[var1].second.second = min(arr[var1].second.second, arr[i].second.first+var);
                var1++;
            }

        }
        if(!flag){
            continue;
        }

        ans = INT_MAX;
        for(int i=n-1;i>=0;i--){
            if(l-arr[i].first<=d){
                ans = min(ans, arr[i].second.second+arr[i].second.first);
            }
            else{
                break;
            }
        }
        if(ans == INT_MAX){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES "<<ans<<endl;
        }
    }
    return 0;
}


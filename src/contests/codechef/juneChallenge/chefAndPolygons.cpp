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

int main(){

    int T;
    cin>>T;
    int n,m,var1, maxVal, var2;
    while(T--){
        cin>>n;
        vector<vector<pair<int,int> > > arr(n);
        vector<pair<int,int> > maxX(n);
        REP(i,0,n){
            cin>>m;
            maxVal = INT_MIN;
            REP(j,0,m){
                cin>>var1>>var2;
                arr[i].push_back(make_pair(var1,var2));
                if(arr[i][j].first>maxVal){
                    maxVal = arr[i][j].first;
                }
            }
            maxX[i].second  = i;
            maxX[i].first = maxVal;
        }
        sort(all(maxX));
        vector<pair<int, int> > ans(n);
        
        REP(i,0,maxX.size()){
            ans[i].first=maxX[i].second;
            ans[i].second = i;
        }

        sort(all(ans));
        tr(ans, it){
            cout<<(*it).second<<" ";
        }
        ENDL;
    }

    return 0;
}


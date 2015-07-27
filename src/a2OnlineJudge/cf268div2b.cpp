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

pair<int,int> x[50], y[50];
int main(){

    int p,q,l,r;
    cin>>p>>q>>l>>r;

    REP(i,0,p){
        cin>>y[i].first>>y[i].second;
    }

    REP(i,0,q){
        cin>>x[i].first>>x[i].second;
    }
    
    int ans=0;
    FOR(i,l,r){
        REP(j,0,q){
            REP(k,0,p){
                if((x[j].first+i<=y[k].first && x[j].second+i>=y[k].first) || (x[j].first+i<=y[k].second && x[j].second+i>=y[k].second) || (x[j].first+i>=y[k].first && x[j].second+i<=y[k].second)){
                    ans++;
                    j=q;
                    break;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}


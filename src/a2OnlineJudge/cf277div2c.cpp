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

string str;
int n,p;

int move(int a, int b){
    int temp, ans=0;
    FOR(i,a,b){
        temp = abs(str[i]-str[n-i+1]);
        ans+=min(temp, 26-temp);
        str[i]=str[n-i+1];
    }
    return ans;
}

int main(){


    cin>>n>>p;
    cin>>str;
    str = ' '+str;
    
    if(p>n/2){
        reverse(str.begin()+1, str.end());
        p = n-p+1;
    }
    int start=-1,end=-1,i;
    for(i=1;i<=n/2;i++){
        if(str[i]!=str[n-i+1]){
            start = i;
            break;
        }
    }

    if(start == -1){
        cout<<0<<endl;
        return 0;
    }

    for(;i<=n/2;i++){
        if(str[i]!=str[n-i+1]){
            end=i;
        }
    }
    int ans=0;
    
    if(p<=start){
        ans+=end-p+move(start,end);
    }
    else if(p>=end){
        ans+=p-start+move(start,end);
    }
    else{
        if(p-start<end-p){
            ans+=p-start+move(start,p);
            ans+=end-start+move(start,end);
        }
        else{
            ans+=end-p+move(p,end);
            ans+=end-start+move(start,end);
        }
    }

    cout<<ans<<endl;
    return 0;
}

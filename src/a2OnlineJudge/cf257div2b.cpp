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

    int x,y,n;
    cin>>x>>y>>n;
    int ans;
    
    if(n>=3){
        
        if(n%3==0){
            if(n%2==0){
                ans = x-y;       
            }
            else{
                ans = y-x;
            }
        }
        else if((n-1)%6==0){
            ans = x;
        }
        else if((n-2)%6==0){
            ans = y;
        }
        else if((n-1)%3==0){
            ans = -x;
        }
        else{
            ans = -y;
        }

    }
    else{
        if(n==1){
            ans = x;
        }
        else{
            ans=y;
        }
    }

    if((ans%=1000000007)<0){
        cout<<ans+(1000000007)<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    return 0;
}

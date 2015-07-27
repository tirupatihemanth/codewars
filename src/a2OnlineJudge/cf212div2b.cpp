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

int arr[3000];
int main(){
    
    int n, d;
    cin>>n>>d;

    REP(i,0,d){
        cin>>arr[i];
    }
    sort(arr, arr+d);
    int max=0;
    if(arr[0] == 1 || arr[d-1] == n){
        cout<<"NO"<<endl;
        return 0;
    }
    REP(i,1,d){
        if(max==2){
            break;
        }
        if(arr[i] == arr[i-1]+1){
            max++;
        }
        else{
            max=0;
        }
    }
    if(max==2){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}


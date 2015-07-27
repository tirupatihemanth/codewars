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

int arr[100000];
int brr[100000];
int main(){
    
    int n,d,var;
    cin>>n>>d;
    REP(i,0,n){
        cin>>var;
        brr[i]=var;
        arr[i%d]+=var;
    }   
    int min=INT_MAX,idx;
    
    REP(i,0,d){
        if(arr[i]<min){
            min = arr[i];
            idx=i;
        }
    }


    cout<<idx+1<<endl;
    return 0;
}


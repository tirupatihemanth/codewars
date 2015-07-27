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

int arr[3000],brr[3000];
int main(){

    int n,m;
    cin>>n>>m;

    REP(i,0,n){
        cin>>arr[i];
    }

    REP(i,0,m){
        cin>>brr[i];
    }

    sort(arr, arr+n);
    sort(brr, brr+m);

    int i=0,j=0;
    while(i<n&&j<m){
        if(arr[i]<=brr[j]){
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    cout<<n-i<<endl;   
    return 0;
}


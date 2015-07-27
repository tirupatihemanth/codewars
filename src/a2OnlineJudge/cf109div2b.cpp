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

bool mySort(pair<int,int> &a, pair<int,int> &b){
    if(a.second!=b.second){
        return a.second>b.second;
    }
    else{
        return a.first>b.first;
    }
}

int main(){

    int n;
    cin>>n;
    vector<pair<int, int> > arr(n);
    
    REP(i,0,n){
        cin>>arr[i].first>>arr[i].second;
    }

    sort(arr.begin(), arr.end(), mySort);
    int counter=1;
    int ans=0;
    
    REP(i,0,n){
        ans+=arr[i].first;
        counter+=arr[i].second;
        counter--;
        if(counter==0){
            break;
        }
    }
    
    cout<<ans<<endl;
    return 0;
}


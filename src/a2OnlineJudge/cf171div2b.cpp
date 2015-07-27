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

int arr[100001];
int sum[100001];
int n,t;

int bs(int i, int a, int b){
    
    if(a==b){
        return a;
    }
    if(sum[(b+a)/2]-sum[i-1]>t){
        return bs(i, a,(a+b)/2-1);
    }
    else if( sum[(b+a)/2]-sum[i-1] < t){
        if(sum[(b+a)/2+1]-sum[i-1]>t){
            return (b+a)/2;
        }
        return bs(i,(b+a)/2+1,b);         
    }
    else{
        return (b+a)/2;
    }
}

int main(){

    cin>>n>>t;
    
    FOR(i,1,n){
        cin>>arr[i];
        sum[i] = sum[i-1]+arr[i];
    }

    int j;
    int maxVal=0,var;
    

    FOR(i,1,n){
        
        if(sum[i]-sum[i-1]<=t){
            j = bs(i, i, n);
            maxVal = max(j-i+1, maxVal);
        }

    }

    cout<<maxVal<<endl;
    return 0;
}


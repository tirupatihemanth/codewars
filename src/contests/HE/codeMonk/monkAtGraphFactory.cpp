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

int arr[101];
int main(){
    int n,sum;
    cin>>n;
    sum=0;
    FOR(i,1,n){
        cin>>arr[i];
        sum+=arr[i];
    }
    
    /*
    sort(arr+1,arr+n+1);
    
    int i=1,j=n;
    while(i<j){
        if(arr[i]>0){
            if(arr[j]>0){
                arr[i]--;
                arr[j]--;
                sum++;
            }
            else{
                j--;
            }
        }
        else{
            i++;
        }
    }
    */
    if(sum/2<n){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}


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

long long int arr[100000];
int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    

    REP(i,0,n){
        cin>>arr[i];
    }

    int i=2,maxVal=2,temp=2;
    while(i<n){
        while(i<n){
            if(arr[i] == arr[i-1]+arr[i-2]){
                temp++; 
            }
            else{
                break;
            }
            i++;
        }
        i++;
        maxVal = max(maxVal, temp);
        temp = 2;
    }
    
    cout<<maxVal<<endl;
    return 0;

}


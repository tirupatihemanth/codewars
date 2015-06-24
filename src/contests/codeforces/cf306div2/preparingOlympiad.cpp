#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <iomanip>
#include <climits>

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
    
    int n,l,r,s,j;
    cin>>n>>l>>r>>s;
    int *arr = new int[n];

    long long int i=0;

    int ans=0, least, greatest, sum, num;

    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    //effectively iterating over all the possibilities each time masking some of the items
    
    for(i=0;i<(1<<n);i++){
        
        least = INT_MAX;
        greatest = 0;
        sum=0;
        num=0;

        for(j=0;j<n;j++){
            if(i&(1<<j)){
                sum+=arr[j];
                least = min(least, arr[j]);
                greatest = max(greatest, arr[j]);
                num++;
            }    
        }
    
        if(num>=2 && greatest-least>=s && sum>=l && sum<=r){
            ans++;
        }

    }
    cout<<ans<<endl;
    return 0;
}

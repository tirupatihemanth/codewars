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
    
    int n;
    cin>>n;
    int *arr = new int[n];
    long long int *sum = new long long int[n];
    int i;
    long long s=0, f;
    cin>>arr[0];
    sum[0] = arr[0];
    
    for(i=1;i<n;i++){
        cin>>arr[i];
        sum[i]=sum[i-1]+arr[i];
    }
    
    s= sum[n-1];
    long long ans=0;
    f=0;
    if(n<3){
        cout<<0<<endl;
        return 0;
    }
    
    long long int u = s/3, v = (2*s)/3;
    if(s%3==0){
        
        for(i=0;i<n-1;i++){
            if(sum[i]==v){
                ans+=f;
            }       
            
            if(sum[i]==u){
                f++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}

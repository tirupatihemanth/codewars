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
    vector<int> arr(n), copy;
    int i,j,k;

    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    copy = arr;
    sort(arr.begin(), arr.end());
    
    int m = 0;
    int temp;
    int var=arr[0];
    temp=0;
    for(i=0;i<n;i++){
        if(arr[i] == var){
            temp++;
        }
        else{
            m = max(m,temp);
            var = arr[i];
            temp=1;
        }
    }
    m = max(m,temp);
    if(m-1<=n-m){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    arr.erase(unique(arr.begin(), arr.end()),arr.end());
    
    j = arr.size();
    k = copy.size();

    

    return 0;
}

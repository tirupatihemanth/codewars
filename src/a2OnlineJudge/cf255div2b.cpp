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
    
    string str;
    int k;
    int arr[26];

    cin>>str>>k;
    int var =  -1, idx;
    for(int i=0;i<26;i++){
        cin>>arr[i];
        if(arr[i]>var){
            idx = i;
            var = arr[i];
        }
    }

    int ans=0;
    for(int i=0;i<str.size();i++){
        ans+=(i+1)*arr[str[i]-'a'];
    }
    
    int i=str.size()+1;
    
    while(k--){
        ans+=var*i;
        i++;
    }
    
    cout<<ans<<endl;
    return 0;
}

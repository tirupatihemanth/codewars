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

    int m,n;
    cin>>m>>n;
    vector<int> arr[300005];
    int i;
    for(i=1;i<=m;i++){
        arr[i].push_back(i);
    }

    int prev=0,a,b;
    string str;
    while(n--){
        cin>>str;
        cin>>a>>b;
        if(str.compare("UNION")==0){
            arr[m+prev+1].resize(arr[a].size()+arr[b].size());
            merge(arr[a].begin(), arr[a].end(), arr[b].begin(), arr[b].end(), arr[m+prev+1].begin());        
            prev++;
        }
        else{
            cout<<arr[a][b-1]<<endl;
        }
    }
    
    return 0;
}

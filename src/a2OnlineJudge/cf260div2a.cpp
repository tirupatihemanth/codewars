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
    if(n==1){
        cout<<"Poor Alex"<<endl;
        return 0;
    }
    vector<pair<int,int> > arr(n);

    int i,j,k;
    for(i=0;i<n;i++){
        cin>>j>>k;
        arr[i] = make_pair(j,k);
    }

    sort(all(arr));
    
    for(i=1;i<n;i++){ 
        if(arr[i].second<arr[i-1].second){
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }
    cout<<"Poor Alex"<<endl;
    return 0;
}

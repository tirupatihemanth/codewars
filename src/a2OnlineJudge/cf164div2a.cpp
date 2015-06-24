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

    map<int, int> uni;

    int h[30], a[30];
    int n,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>h[i]>>a[i];
    }
    
    for(i=0;i<n;i++){
        if(uni.find(h[i])!=uni.end() ){
            uni[h[i]]++;
        }
        else{
            uni[h[i]] = 1;
        }
    }

    int ans=0;

    for(i=0;i<n;i++){
        if(uni.find(a[i])!=uni.end()){
            ans+=uni[a[i]];
        }   
    }

    cout<<ans<<endl;

    return 0;
}

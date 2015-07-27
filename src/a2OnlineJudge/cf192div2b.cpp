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


int main(){
    int n,m;
    cin>>n>>m;

    int var;
    set<int> intSet;

    FOR(i,1,n){
        intSet.insert(i);
    }
 set<int>::iterator it; 
    REP(i,0,m){
        cin>>var;
        it = intSet.find(var);
        if(it!=intSet.end()){
        intSet.erase(it);
        }
        cin>>var;
        it = intSet.find(var);
        if(it!=intSet.end()){
        intSet.erase(it);
        }
    }
    
   it = intSet.begin();

    var = *it;

    cout<<n-1<<endl;
    FOR(i,1,n){
        if(i!=var){
            cout<<var<<" "<<i<<endl;       
        }
    }
    return 0;
}


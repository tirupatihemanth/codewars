#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <queue>
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
    
    int n;
    cin>>n;
    int val = n/4, var=-1;
    FORD(i,val,0){
        if((n-i*4)%7==0){
            val = i;
            var = (n-i*4)/7;
        }
    }

    if(var!=-1){
        REP(i,0,val){
            cout<<4;
        }
        REP(i,0,var){
            cout<<7;
        }
    }
    else{
        cout<<-1;
    }
    cout<<endl;
    return 0;
}


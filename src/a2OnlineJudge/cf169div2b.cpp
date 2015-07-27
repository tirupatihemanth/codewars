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
    string str;
    cin>>str;
    map<int,int> var;
    
    REP(i,0,str.size()){
        if(var.find(str[i]) == var.end()){
            var[str[i]]=0;
        }
        else{
            var.erase(str[i]);
        }
    }
    
    int size = var.size()-1;

    if(size<0 || size%2==0){
        cout<<"First"<<endl;
    }
    else{
        cout<<"Second"<<endl;
    }
    return 0;
}


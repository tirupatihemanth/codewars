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
    map<string ,int> mapVar;

    int n,temp;
    stringstream strm;
    cin>>n;
    string var, var1;
    while(n--){
        cin>>var;
        if(mapVar.find(var)!=mapVar.end()){
            temp = ++mapVar[var];
            strm<<temp;
            var+=strm.str();
            strm.str("");
            mapVar[var] = 0;
            cout<<var<<endl;
        }
        else{
            mapVar[var] = 0;
            cout<<"OK"<<endl;
        }

    }
    return 0;
}

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

    map <string, int> var;
    string str;
    while(n--){
        cin>>str;
        if(var.find(str)== var.end()){
            var[str]=1;
        }
        else{
            var[str]++;
        }
    }
    
    int goal = 0;
    for(map<string, int>::iterator it = var.begin();it!=var.end();it++){
        if(goal< (*it).second){
            str = (*it).first;
            goal = (*it).second;
        }
    }

    cout<<str<<endl;
    return 0;
}

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
    
    string str,wub, p1, p2;
    wub = "WUB";
    cin>>str;
    int pos=0,prev=-3;
    while((pos = str.find(wub, pos)) != string::npos){
        if(pos>prev+3){
            cout<<str.substr(prev+3,pos-prev-3)<<" ";
        }
        prev = pos;
        pos+=3;
    }
    if(prev+3<str.size()){
        cout<<str.substr(prev+3)<<" ";
    }
    cout<<endl;
    return 0;
}

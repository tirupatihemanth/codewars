#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <iomanip>
#include <cstdlib>

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

int myFunc(string& str){
    return atoi(str.c_str());
}
int main(){

    string str;
    cin>>str;
    
    stringstream strm;
    strm<<str;
    string token;
    vector<string> tokens;

    
    while(getline(strm, token,'+')){
        tokens.push_back(token);
    }
    vector<int> val(tokens.size());
    
    transform(tokens.begin(), tokens.end(), val.begin(), myFunc);
    
    sort(val.begin(), val.end());
    for(int i=0;i<val.size();i++){
        cout<<val[i];
        if(i!=val.size()-1){
            cout<<"+";
        }
    }
    cout<<endl;
    return 0;
}

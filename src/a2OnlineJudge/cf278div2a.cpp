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

    long long int a;
    cin>>a;

    long long int i=a;

    string str;
    stringstream strm;
    
    i++;
    int j;
    while(true){
    
        strm<<i;
        str = strm.str();
        for(j=0;j<str.size();j++){
            if(str[j] == '8'){
                cout<<i-a<<endl;
                return 0;
            }
        }
        strm.str("");
        
        i++;
    }
    return 0;
}

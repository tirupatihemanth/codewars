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
    
    string str;
    cin>>str;

    int var1 = str.find("AB");
    int var2 = str.find("BA");

    if(var1<str.size() && var2<str.size()){
        
    
            if(str.find("BA", var1+2)<str.size()){
                cout<<"YES"<<endl;
                return 0;
            }
            if(str.find("AB", var2+2)<str.size()){
                cout<<"YES"<<endl;
                return 0;
        }
    }
    
    cout<<"NO"<<endl;
    return 0;
}

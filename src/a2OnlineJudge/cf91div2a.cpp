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
    stringstream strm;

    int n;
    cin>>n;
    strm<<n;
    string str;
    strm>>str;

    for(int i=0;i<str.size();i++){
        if(str[i] != '4' && str[i] != '7'){
            if(n%4==0 || n%7 == 0 || n%47 == 0 || n%74==0 || n%477==0 || n&747 == 0 || n%774==0 || n%447==0 || n%474==0 || n%744==0 || n%44==0 || n%77==0 || n%444==0 || n%777==0){
                cout<<"YES"<<endl;
                return 0;
            }
            cout<<"NO"<<endl;
            return 0;

        }
    }
    cout<<"YES"<<endl;
    return 0;
}

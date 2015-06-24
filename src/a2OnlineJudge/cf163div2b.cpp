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

    int n, t;

    cin>>n>>t;

    string str, strcpy;
    cin>>str;
    strcpy=str;
    int i;
    while(t--){
        for(i=0;i<n;i++){
            if(str[i]=='G'){
                if(i>0 && str[i-1] == 'B'){
                    swap(strcpy[i],strcpy[i-1]);
                }
            }
        }
        str = strcpy;
    }
    cout<<strcpy<<endl;
    return 0;
}

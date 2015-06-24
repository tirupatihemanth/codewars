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
    int k;
    cin>>k;
    char arr[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    int var;
    for(int i=1;i<=9;i++){
        var = 2*k;
        for(int j=0;j<4;j++){
            for(int m=0;m<4;m++){
                if(arr[j][m]=='0'+i){
                    var--;
                    if(var<0){
                        cout<<"NO"<<endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}

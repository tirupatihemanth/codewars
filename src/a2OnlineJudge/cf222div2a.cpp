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

    int a,b;
    cin>>a>>b;
    int w=0, l=0, d=0, i;
    for(i=1;i<=6;i++){
        if(abs(a-i)>abs(b-i)){
            w++;            
        }
        else if(abs(a-i) == abs(b-i)){
            d++;
        }
        else{
            l++;
        }
    }

    cout<<l<<" "<<d<<" "<<w<<endl;
    return 0;
}

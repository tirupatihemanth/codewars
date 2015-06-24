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

    long long int a,b;
    cin>>a>>b;
    int temp = a;
    int i=0;
    while(1){
        if(a==b){
            cout<<"YES"<<endl;
            cout<<i<<endl;
            break;
        }
        else if(a>b){
            cout<<"NO"<<endl;
            break;
        }
        a = a*temp;
        i++;
    }
    return 0;
}

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

    long long int n,x,y;
    cin>>n;
    if(n>0){
        cout<<n<<endl;
    }
    else{
        n = abs(n);
        x = n%10;
        y = n%100;
        if((y/10)>x){
            n = n/10;
            n = n-n%10;
            n+=x;
            cout<<-n<<endl;
        }
        else{
            cout<<-(n/10)<<endl;       
        }
    }
    return 0;
}

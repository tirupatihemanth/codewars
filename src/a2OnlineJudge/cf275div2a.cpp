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

    long long int l, r;

    cin>>l>>r;

    if(r-l+1<3){
        cout<<-1<<endl;
        return 0;
    }

    if(l%2==0){
        cout<<l<<" "<<l+1<<" "<<l+2<<endl;
        return 0;
    }

    if(r-l+1>3){
        cout<<l+1<<" "<<l+2<<" "<<l+3<<endl;
        return 0;
    }

    cout<<-1<<endl;
    return 0;
}

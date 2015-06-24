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

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    float val1, val2;

    val1 = max(3.0*a/10, a*1.0 - (a/250.0)*c);
    val2 = max(3.0*b/10, b*1.0 - (b/250.0)*d);
    if(val1>val2){
        cout<<"Misha"<<endl;
    }
    else if(val1<val2){
        cout<<"Vasya"<<endl;
    }
    else{
        cout<<"Tie"<<endl;
    }
    return 0;
}

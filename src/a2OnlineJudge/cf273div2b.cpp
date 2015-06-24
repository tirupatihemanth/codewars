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

    long long int n,m;
    cin>>n>>m;
    if(n%m==0){
        cout<<m*((n/m)*(n/m-1)/2)<<" ";
    }
    else{
        cout<<(m-(n%m))*((n/m)*(n/m-1)/2)+(n%m)*((n/m)+1)*(n/m)/2<<" ";
    }

    cout<<(n-(m-1))*(n-(m-1)-1)/2<<endl;
    return 0;
}

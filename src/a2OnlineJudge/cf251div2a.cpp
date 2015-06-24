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
    
    int n,d;
    cin>>n>>d;

    int sum=0, var;

    int i,j,k;

    for(i=0;i<n;i++){
        cin>>var;
        sum+=var;
    }

    if(sum+(n-1)*10>d){
        cout<<-1<<endl;
    }
    else{
        d = d-(sum);
        cout<<d/5<<endl;
    }
    return 0;
}

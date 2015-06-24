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

    int y, k, n;

    cin>>y>>k>>n;

    int i, x = n-y;

    if(x<1){
        cout<<-1<<endl;
        return 0;
    }
   if(k>x+y){
        cout<<-1<<endl;
        return 0;
    }
    for(i=x;i>0;i--){
        if((i+y)%k == 0){
            break;
        }
    }
    
    if(i<1){
        cout<<-1<<endl;
        return 0;
    }

 
    vector<int> var;
    while(i>0){
        var.push_back(i);
        i-=k;
    }

    for(i=var.size()-1;i>=0;i--){
        cout<<var[i]<<" ";
    }
    cout<<endl;
    return 0;
}

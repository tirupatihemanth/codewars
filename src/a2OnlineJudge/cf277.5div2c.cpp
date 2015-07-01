#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <iomanip>
#include <stack>

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

    int m,s;
    cin>>m>>s;
    stack<int> min;
    int var1=m, var2=s;

    
    if(var2 > 9*m){
        cout<<"-1 -1"<<endl;
        return 0;
    }
    else if(var2==0){
        if(var1==1){
            cout<<"0 0"<<endl;
        }
        else{
            cout<<"-1 -1"<<endl;
        }
        return 0;
    }

    while(var1>1){
        if(var2>9){
            min.push(9);        
            var2-=9;
        }
        else if(var2>1){
            min.push(var2-1);
            var2=1;
        }
        else{
            min.push(0);
        }   
        var1--;
    }
    cout<<var2;
    
    while(!min.empty()){
        cout<<min.top();
        min.pop();
    }

    cout<<" ";
    var1=m,var2=s;
    while(var1--){
        if(var2>9){
            cout<<9;
            var2-=9;
        }
        else{
            cout<<var2;
            var2=0;
        }
    }
    
    cout<<endl;    
    return 0;
}

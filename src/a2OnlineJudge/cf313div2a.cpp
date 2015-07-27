#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <cstring>
#include <climits>

#define FOR(i,l,r) for(auto i=l;i<=r;i++)
#define REP(i,l,r) for(auto i=l;i<r;i++)
#define FORD(i,l,r) for(auto i=l;i>=r;i--)
#define REPD(i,l,r) for(auto i=l;i>r;i--)
#define ENDL cout<<endl
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define tr(c,i) for(auto i = (c).begin(); i!=(c).end(); i++)
#define present(c,x) ((c).find(x)!=(c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

int main(){

    int a1,b1,a2,b2,a3,b3;
    cin>>a1>>b1>>a2>>b2>>a3>>b3;

    if(a1>b1){
        swap(a1,b1);
    }
    if(a2>b2){
        swap(a2,b2); 
    }
    if(a3>b3){
        swap(a3,b3);
    }

    if(a2*b2<a3*b3){
        swap(a2,a3);
        swap(b2,b3);
    }

    if(a1*b1< a2*b2+a3*b3){
        cout<<"NO"<<endl;
        return 0;
    }

    
    if(a1!=a2 && b1!=b2){
        int var1,var2;
        var1=abs(a1-a2);
        var2=max(b1,b2);
        if(var1>var2){
            swap(var1,var2);    
        }

        if(var1>=a3 && var2>=b3){
            cout<<"YES"<<endl;
        }
        else{
            var1=max(a1,a2);
            var2=abs(b1-b2);
            if(var1>var2){
                swap(var1,var2);
            }
            if(var1>=a3 && var2>=b3){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }
    else if(a1==a2 && b1!=b2){
        int var1, var2;
        var1=a1;
        var2=abs(b1-b2);
        if(var1>var2){
            swap(var1,var2);
        }
        if(var1>=a3 && var2>=b3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else if(a1!=a2 && b1==b2){
        int var1,var2;
        var1=b1;
        var2=abs(a1-a2);
        if(var1>var2){
            swap(var1,var2);
        }
        if(var1>=a3 && var2>=b3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}


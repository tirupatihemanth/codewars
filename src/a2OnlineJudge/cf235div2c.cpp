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
    
    int n,m;
    cin>>n>>m;

    if(m>(n+1)*2){
        cout<<-1;
    }
    else if(m<(n-1)){
        cout<<-1;
    }
    else{
        if(m>=n+1){
            cout<<11;
            m-=2;
        }
        else if(m>=n){
            cout<<1;
            m--;
        }
        cout<<0;
        n--;
        while(n!=0){
            if(m>=n+1){
                cout<<11;
                m-=2;
                n--;
            }
            else{
                cout<<1;
                m--;
                n--;
            }
            cout<<0;
        }
        if(m==2)cout<<11;else if(m==1)cout<<1;
    }
    cout<<endl;
    return 0;
}

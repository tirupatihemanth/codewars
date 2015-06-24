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
    
    int n, m;

    cin>>n>>m;
    int i;
    if(n%2==0){
        i=0;
        while(i<=n){
            if(((n-i)/2+i)%m==0){
                cout<<(n-i)/2+i<<endl;
                return 0;
            }
            i+=2;
        }
    }else{
        n--;
        i=0;
        while(i<=n){
            if(((n-i)/2+i+1)%m==0){
                cout<<(n-i)/2+i+1<<endl;
                return 0;
            }
            i+=2;
        }
    }

    cout<<-1<<endl;
    return 0;
}

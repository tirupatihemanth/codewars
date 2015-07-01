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
    
    int n,k,sum,temp;
    int T;
    cin>>T;
    while(T--){
        sum=0;
        cin>>n>>k;
        int i;
        for(i=0;i<n;i++){
            cin>>temp;
            sum+=temp;
        }
        if(sum%2==0){
            if(k==1){
                cout<<"odd"<<endl;
            }
            else{
                cout<<"even"<<endl;
            }
        }
        else{
            cout<<"even"<<endl; 
        }
    }
    return 0;
}

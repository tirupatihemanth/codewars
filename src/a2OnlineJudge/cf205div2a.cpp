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
    
    int n;
    cin>>n;
    vector<pair<int, int> > arr(n);

    int i,j,k;
    j=0;k=0;

    for(i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
        j+=arr[i].first;
        k+=arr[i].second;
    }

    if(j%2==0 && k%2==0){
        cout<<0<<endl;
        return 0;
    }

    if(j%2==0 && k%2!=0){
        cout<<-1<<endl;
        return 0;
    }

    if(j%2!=0 && k%2==0){
        cout<<-1<<endl;
        return 0;
    }

    if(j%2!=0 && k%2!=0){
        for(i=0;i<n;i++){
            if((arr[i].first%2!=0 && arr[i].second%2==0) || (arr[i].second%2!=0 && arr[i].first%2==0)){
                cout<<1<<endl;
                return 0;
            }
        }
    }

    cout<<-1<<endl;
    return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <iomanip>
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

int size[100];
int main(){

    int n,k;
    cin>>n>>k;

    vector<vector<int> > arr(n);
    int var,min = INT_MAX, max = INT_MIN;
    REP(i,0,n){
        cin>>size[i];
        if(size[i]<min){
            min = size[i];
        }
        if(size[i]>max){
            max = size[i];
        }
    }
    //sort(size, size+n);

    if(min+k<max){
        cout<<"NO"<<endl;
        return 0;
    }

    REP(i,0,n){
        arr[i].resize(size[i]);
    }
    
    int j,m;
    
    REP(i,0,n){
        j=0;
        m=1;
        while(j<size[i]){
            arr[i][j]=m;
            j++;
            m++;
            if(m>k){
                m=1;
            }
        }
    }

    cout<<"YES"<<endl;
    REP(i,0,n){
        REP(j,0,size[i]){
            cout<<arr[i][j]<<" ";
        }
        ENDL;
    }


    return 0;
}


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

int b[100][100],a[100][100];
int m,n;
void setZero(int x,int y){
    int i;

    for(i=0;i<n;i++){
       a[x][i]=0;
    }
    for(i=0;i<m;i++){
        a[i][y]=0;
    }

}

int getVal(int x, int y){
    int i;
    int ans=0;
    for(i=0;i<n;i++){
        ans = ans||a[x][i];
        if(ans){
            return 1;
        }
    }
    for(i=0;i<m;i++){
        ans = ans||a[i][y];
        if(ans){
            return 1;
        }
    }
    return ans;
}


int main(){
    
    cin>>m>>n;
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            a[i][j]=1;
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>b[i][j];
            if(b[i][j]==0){
                setZero(i,j);
            }
        }
    }


    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(b[i][j] != getVal(i,j)){
                cout<<"NO"<<endl;
                return 0;
            }          
        }
    }

    cout<<"YES"<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

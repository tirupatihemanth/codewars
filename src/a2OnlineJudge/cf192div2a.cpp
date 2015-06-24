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
    
    int r,c;
    cin>>r>>c;
    char arr[10][10];
    bool stat[10][10];

    int i,j;

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>arr[i][j];
            stat[i][j] = true;
        }
    }

    bool p;
    int ans=0;
    for(i=0;i<r;i++){
        p = false;
        for(j=0;j<c;j++){
            if(arr[i][j] == 'S'){
                p = true;
                break;
            }
        }
        if(!p){
            for(j=0;j<c;j++){
                if(stat[i][j]){
                    ans++;
                    stat[i][j]=false;
                }
            }
        }
    }
    
    for(i=0;i<c;i++){
        p = false;
        for(j=0;j<r;j++){
            if(arr[j][i] == 'S'){
                p = true;
                break;
            }
        }
        if(!p){
            for(j=0;j<r;j++){
                if(stat[j][i]){
                    ans++;
                    stat[j][i]=false;
                }
            }
        }
    }

    cout<<ans<<endl;
    return 0;
}

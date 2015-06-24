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

    int m,n;
    cin>>m>>n;

    char arr[100][100];

    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    char best[100];

    char temp;

    for(j=0;j<n;j++){
        temp = 0;
        for(i=0;i<m;i++){
            temp = max(temp, arr[i][j]);
        }
        best[j] = temp;
    }

    int ans=0;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(arr[i][j] == best[j]){
                ans++;
                break;
            }
        }
    }
    
    cout<<ans<<endl;
    return 0;
}

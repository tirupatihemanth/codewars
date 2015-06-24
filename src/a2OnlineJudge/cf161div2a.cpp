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

    int arr[6][6];
    int i, j;

    for(i=1;i<6;i++){
        for(j=1;j<6;j++){
            cin>>arr[i][j];
            if(arr[i][j] == 1){
                cout<<abs(3-i)+abs(3-j)<<endl;
                return 0;
            }
        }
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <iomanip>
#include <climits>

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

    int num[3];
    int n;
    cin>>n>>num[0]>>num[1]>>num[2];
    int *arr = new int[n+1];
    int i,j;

    for(i=0;i<=n;i++){
        arr[i] = 0;
    }
    if(num[0]<=n){
        arr[num[0]] = 1;
    }
    if(num[1]<=n){
    arr[num[1]] = 1;
    }
    if(num[2]<=n){
    arr[num[2]] = 1;
    }
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            if(j+num[0] == i){
                if(arr[j]!=0){
                    arr[i] = max(arr[i], arr[j]+1);
                }
            }
            else if(j+num[1] == i){
                if(arr[j]!=0){
                    arr[i] = max(arr[i], arr[j]+1);
                }
            }
            else if(j+num[2] == i){
                if(arr[j]!=0){
                    arr[i] = max(arr[i], arr[j]+1);
                }
            }
        }
    }



    cout<<arr[n]<<endl;
    return 0;
}

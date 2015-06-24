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
    
    int n;
    cin>>n;
    int *arr = new int[n+1];
    int i;

    arr[0]=INT_MAX;
    arr[1]=0;
    for(i=2;i<=n;i++){
        if(i%2==0){
            if(i%3==0){
                arr[i] = min(min(arr[i-1],arr[i/2]), arr[i/3])+1;
            }
            else{
                arr[i] = min(arr[i-1], arr[i/2])+1;
            }
        }
        else if(i%3==0){
            arr[i] = min(arr[i-1], arr[i/3])+1;
        }
        else{
            arr[i] = arr[i-1]+1;
        }
    }
    cout<<arr[n]<<endl;
    return 0;
}

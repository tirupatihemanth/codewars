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

    int i, j,k=0;

    for(i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }

    bool left, right, up , down;
    for(i=0;i<n;i++){
        left = false;
        right = false;
        up = false;
        down = false;
        for(j=0;j<n;j++){
            if(j==i){
                continue;
            }
            if(arr[i].first == arr[j].first){
                if(arr[j].second> arr[i].second){
                    up = true;
                }
                else{
                    down = true;
                }
            }
            else if(arr[i].second == arr[j].second){
                if(arr[j].first>arr[i].first){
                    right = true;
                }
                else{
                    left = true;
                }
            }
        }
        if(up && down && left && right){
            k++;
        }
    
    }

    cout<<k<<endl;
    return 0;
}

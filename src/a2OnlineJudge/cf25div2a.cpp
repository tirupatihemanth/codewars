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
    
    short even=0;

    int n,i;
    cin>>n;
    int arr[100];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<3;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            even--;
        }
    }

    if(even>0){
        for(i=0;i<n;i++){
            if(arr[i]%2!=0){
                cout<<i+1<<endl;
                return 0;
            }
        }
    }
    else{
        for(i=0;i<n;i++){
            if(arr[i]%2==0){
                cout<<i+1<<endl;
                return 0;
            }
        }
    }
}

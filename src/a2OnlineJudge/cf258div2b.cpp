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

    vector<int> arr(n);

    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    int first=-1;

    for(i=0;i<n-1;i++){
        if(arr[i] >arr[i+1]){
            first = i;
            break;
        }
    }

    if(first == -1){
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
        return 0;
    }
    
    int last=-1;
    for(i=first+1;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            last = i;
            break;
        }        
    }
    
    if(last == -1){
        last = n-1;
    }
    
    sort(arr.begin()+first, arr.begin()+last+1);

    for(i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            cout<<"no"<<endl;
            return 0;
        }
    }
    cout<<"yes"<<endl;
    cout<<first+1<<" "<<last+1<<endl;
    return 0;
}

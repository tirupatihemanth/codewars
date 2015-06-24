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

    int arr[100];

    int i,j,k,m;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }



    for(i=0;i<n;i++){
        if(arr[i]<0){
            j=i;
            cout<<1<<" "<<arr[i]<<endl;
            break;
        }
    }
    
    k = -1;
    for(i=0;i<n;i++){
        if(arr[i]>0){
            cout<<1<<" "<<arr[i]<<endl;
            k=i;
            break;
        }
    }

    m=-1;
    if(k == -1){
        for(i=0;i<n;i++){
            if(arr[i]<0 && i!=j){
                k=i;
                break;
            }
        }
        for(i=0;i<n;i++){
            if(arr[i]<0 && i!=k && i!=j){
                m=i;
                break;
            }
        }
        cout<<2<<" "<<arr[k]<<" "<<arr[m]<<endl;
    }

    if(m==-1){
        cout<<n-2<<" ";
    }
    else
        cout<<n-3<<" ";
    for(i=0;i<n;i++){
        if(i!=j && i!=k && i!=m){
            cout<<arr[i]<<" ";
        }
    }

    cout<<endl;
    return 0;
}

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
    
    int n=1000001;
    int arr[n];
    long long int j;

    for(int i=2;i<n;i++){
        arr[i] = i;
    }

    for(int i=2;i*i<n;i++){
        if(arr[i] == -1){
            continue;
        }
        for(j=i*i;j<n;j++){
            if(arr[j]!=-1 && arr[j]%i==0){
                arr[j]=-1;
            }
        }
    }

    vector<int> var;

    for(int i=2;i<n;i++){
        if(arr[i]!=-1){
            //cout<<arr[i]<<" ";
            var.push_back(arr[i]);
        }
    }
    
    
    cin>>n;
    int temp;
    for(int i=0;i<n;i++){
        
        cin>>j;
        temp = sqrt(j);
        if(j == pow(temp,2) && binary_search(var.begin(), var.end(), temp)){
            cout<<"YES"<<endl;
        }  
        else{
            cout<<"NO"<<endl;
        }
    }

    
    return 0;
}

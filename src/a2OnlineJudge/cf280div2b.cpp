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

    int n,l;
    cin>>n>>l;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sort(arr, arr+n);

    double var=0;
    double temp=0;
    
    for(int i=0;i<n-1;i++){
        temp =((arr[i+1]-arr[i])*1.0)/2; 
        var = var>temp?var:temp;
    }
    
    cout<<setprecision(10);
    cout<<fixed;
  
    if(var>=arr[0] && var>=l-arr[n-1]){
        cout<<var;
    }
    else if(var<arr[0] && var>=l-arr[n-1]){
        cout<<arr[0];
    }
    else if(var>=arr[0] && var<l-arr[n-1]){
        cout<<l-arr[n-1];
    }
    else{
        cout<< (arr[0]>l-arr[n-1]?arr[0]:l-arr[n-1]);
    }
    cout<<endl;
    return 0;
}

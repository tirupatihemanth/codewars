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
    char **arr = new char*[n];

    int i, j;


    for(i=0;i<n;i++){
        arr[i] = new char[n];
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];       
        }
    }
    
    char var = arr[0][0];

    for(i=0;i<n;i++){
        if(arr[i][i]!=var){
            cout<<"NO"<<endl;
            return 0;
        }
        arr[i][i] = '0';
    }


    if(var != arr[0][n-1]){
        cout<<"NO"<<endl;
        return 0;
    }

    i=0;j=n-1;
    while(i!=n){
        if(arr[i][j]!=var && arr[i][j]!='0'){
            cout<<"NO"<<endl;
            return 0;
        }
        arr[i][j] = '0';
        i++;
        j--;
    }
    
    if(var == arr[0][1]){
        cout<<"NO"<<endl;
        return 0;
    }
    else{
        var = arr[0][1];
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]!=var && arr[i][j]!='0'){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }

    cout<<"YES"<<endl;
    return 0;
}

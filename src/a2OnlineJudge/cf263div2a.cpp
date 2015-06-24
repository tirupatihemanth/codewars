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

    short **arr = new short*[n];
    int i,j,ans;
    char temp;

    for(i=0;i<n;i++){
        arr[i] = new short[n];
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>temp;
            if(temp == 'x'){
                arr[i][j]=0;
            }
            else{
                arr[i][j] = 1;
            }
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            ans=0;
            if(i>0&&j>0){
                ans+=arr[i-1][j]+arr[i][j-1];
            }
            else if(i>0){
                ans+=arr[i-1][j];
            }
            else if(j>0){
                ans+=arr[i][j-1];
            }

            if(i<n-1&&j<n-1){
                ans+=arr[i+1][j]+arr[i][j+1];
            }
            else if(i<n-1){
                ans+=arr[i+1][j];
            }
            else if(j<n-1){
                ans+=arr[i][j+1];
            }
            if(ans%2!=0){
                cout<<"NO"<<endl;
                return 0;
            }
            
        }
    }
    
    cout<<"YES"<<endl;
    return 0;
}

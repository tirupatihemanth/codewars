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
    
    int m,n;
    cin>>m>>n;

    int **arr, **sum;
    arr = new int*[m];
    sum = new int*[m];
    int i, j;

    for(i=0;i<n;i++){
        arr[i] = new int[n];
        sum[i] = new int[n];
    }
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
            sum[i][j] = 0;
        }
    }
    
    //First find no. of ways you can get to the current state
    //i.e we can get from two previous states i.e either from the top
    //or from the left hence the max value for the current state is 
    //the max value of ( top, left) + value of current state gives the final value for the current state
    

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum[i][j] = arr[i][j]+max(j>=1?sum[i][j-1]:0, i>=1?sum[i-1][j]:0);   
        }
    }

    cout<<sum[n-1][n-1]<<endl;
    return 0;
}

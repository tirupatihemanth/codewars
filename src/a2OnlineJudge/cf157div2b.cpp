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

bool checkMagic(int **arr,int var){
    int i,j;
    int sum;
    for(i=0;i<3;i++){
        sum=0;    
        for(j=0;j<3;j++){
            sum+=arr[j][i];
        }
        if(sum!=var){
            return false;
        }
    }
    if(var!=(arr[0][0]+arr[1][1]+arr[2][2])){
        return false;
    }
    if(var!=(arr[2][0]+arr[1][1]+arr[0][2])){
        return false;
    }
    return true;
}

int main(){

    int **arr = new int*[3];
    int i,j,var;
    for(i=0;i<3;i++){
        arr[i] = new int[3];
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(i=1;i<=100000;i++){
        arr[0][0] = i;
        var = i+arr[0][1]+arr[0][2];
        if((arr[1][1] = var-arr[1][0]-arr[1][2])<=0)continue;
        if((arr[2][2] = var-arr[2][0]-arr[2][1])<=0)continue;
        if(checkMagic(arr, var)){
            break;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<arr[i][j]<<" ";       
        }
        cout<<endl;
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <iomanip>
#include <climits>

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

int *arr;

int solve(int i){

    if(arr[i]!=-1){
        return arr[i];
    }
    if(i%2==0){
        if(i%3==0){
            return min(min(solve(i-1), solve(i/2)), solve(i/3))+1;
        }
        else{
            return min(solve(i-1),solve(i/2))+1;
        }

    } 
    else if(i%3==0){
        return min(solve(i/3), solve(i-1))+1;
    }
    else{
        return solve(i-1)+1;   
    }
}

int main(){

    int n;
    cin>>n;
    arr = new int[n+1];
 

    arr[0] = INT_MAX;
    arr[1] = 0;
    for(int i=2;i<n+1;i++){
        arr[i] = -1;
    } 
   cout<< solve(n)<<endl;
    return 0;
}

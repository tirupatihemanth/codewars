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

    long long int T,sum,i, N, *arr;
    cin>>T;

    while(T--){
        cin>>N;
        arr = new long long int[N];
        for(i=0;i<N;i++){
            cin>>arr[i];
        }

        sum = arr[0];
        for(i=1;i<N;i++){
            if(arr[i]-arr[i-1]>0){
                sum+=arr[i]-arr[i-1];
            }
        }
        cout<<sum<<endl;
        delete [] arr;

    }
    return 0;
}

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

map<long long int, long long int> var;
int main(){
    
    long long int n,temp;
    cin>>n;
    while(n--){
        cin>>temp;
        var[temp]++;
    }
    vector<pair<long long int, long long int> > pairs(var.size());
    
    n=0;
    for(map<long long int,long long int>::iterator it = var.begin();it!=var.end();it++){
        pairs[n]=*it;
        n++;
    }
    
    n = var.size();
    long long int arr[n];
    arr[0] = pairs[0].first*pairs[0].second;
    for(int i=1;i<n;i++){
        if(pairs[i].first == pairs[i-1].first+1){
            if(i-2>=0){
                if(arr[i-1]>arr[i-2]+pairs[i].first*pairs[i].second){
                    arr[i] = arr[i-1];
                }
                else{
                arr[i] = arr[i-2]+pairs[i].first*pairs[i].second;
                }
            }
            else{
                if(arr[i-1]>pairs[i].first*pairs[i].second){
                    arr[i] = arr[i-1];
                }
                else{
                arr[i]= pairs[i].first*pairs[i].second;
                }
            }
        }   
        else{
            arr[i] = arr[i-1]+pairs[i].first*pairs[i].second;
        }
    }
    cout<<arr[n-1]<<endl;
    return 0;
}

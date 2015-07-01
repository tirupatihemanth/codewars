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

map<int,int> freq;

int main(){

    int T;
    cin>>T;
    int n,i,temp;
    while(T--){
        cin>>n;
        for(i=0;i<n;i++){
            cin>>temp;
            freq[temp]++;
        }

        vector<pair<int,int> > arr(freq.begin(), freq.end());
        if(arr.size() == 1){
            if(arr[0].first == 1){
                if(arr[0].second%2==0){
                    cout<<0<<endl;
                    continue;
                }
                else{
                    cout<<1<<endl;
                    continue;
                }
            }
        }           
                
        
    }
    return 0;
}

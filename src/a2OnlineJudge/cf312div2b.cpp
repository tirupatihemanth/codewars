#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <cstring>
#include <climits>

#define FOR(i,l,r) for(auto i=l;i<=r;i++)
#define REP(i,l,r) for(auto i=l;i<r;i++)
#define FORD(i,l,r) for(auto i=l;i>=r;i--)
#define REPD(i,l,r) for(auto i=l;i>r;i--)
#define ENDL cout<<endl
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define tr(c,i) for(auto i = (c).begin(); i!=(c).end(); i++)
#define present(c,x) ((c).find(x)!=(c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;


map<int,int> var;
int arr[100001];

int main(){
    

    int n;
    cin>>n;
    
    FOR(i,1,n){
        cin>>arr[i];
        var[arr[i]]++;    
    }
    
    vector<pair<int, int> > brr(var.begin() ,var.end());
    
    int var1=0, var2=0;
    REP(i,0,brr.size()){
        if(brr[i].second>var2){
            var1 = brr[i].first;
            var2 = brr[i].second;
        }
    }
    
    int start, end, temp1, temp2, maxVal=1000000;
    REP(j,0,brr.size()){ 
        if(brr[j].second == var2){
            var1 = brr[j].first;
            FOR(i,1,n){
                if(arr[i]==var1){
                    temp1=i;
                    break;
                }    
            }
            FOR(i,temp1,n){
                if(arr[i]==var1){
                    temp2 = i;
                }
            }
            if(temp2-temp1<maxVal){
                start = temp1;
                end = temp2;
                maxVal = temp2-temp1;
            }
        }
    }

    cout<<start<<" "<<end<<endl;
    return 0;
}


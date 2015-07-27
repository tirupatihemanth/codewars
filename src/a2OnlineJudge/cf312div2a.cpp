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

vector<pair<int, int> > arr1(100);
vector<pair<int, int> > arr2(100);
int main(){

    int n;
    cin>>n;
    int var1, var2, num1=0,num2=0, sum1=0, sum2=0;
    REP(i,0,n){
        cin>>var1>>var2;
        if(var1<0){
            arr1[num1].first = var1;
            arr1[num1].second = var2;
            sum1+=var2;
            num1++;
        }
        else{
            arr2[num2].first = var1;
            arr2[num2].second = var2;
            sum2+=var2;
            num2++;
        }
    }
    sort(arr1.begin(), arr1.begin()+num1, greater<pair<int, int> >());
    sort(arr2.begin(), arr2.begin()+num2);

    int ans;
    if(num1==num2){
        ans = sum1+sum2;
    }
    else if(num1<num2){
        ans = sum1;
        FOR(i,0,num1){
            ans+=arr2[i].second;
        }
    }
    else if(num1>num2){
        ans = sum2;
        FOR(i,0,num2){
            ans+=arr1[i].second;
        }
    }
    cout<<ans<<endl;
    return 0;
}


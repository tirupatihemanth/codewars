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

char arr[1000000];
int main(){

    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    int a,b;
    int sum=0;
    REP(i,0,n){
        cin>>a>>b;
        if(sum+a<=500){
            arr[i]='A';
            sum+=a;
        }

        else{
            arr[i]='G';
            sum-=b;
        }
    }
    REP(i,0,n){
        cout<<arr[i];
    }
    ENDL;
    return 0;
}


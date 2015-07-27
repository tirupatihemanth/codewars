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

int arr[2001][2001];
long long int p[4002];
long long int s[4002];

int main(){
    ios::sync_with_stdio(false); 
    int x1=1,y1=1,x2=1,y2=2,n;
    cin>>n;
    
    FOR(i,1,n){
        FOR(j,1,n){
            cin>>arr[i][j];
            p[i+j-1]+=arr[i][j];
            s[n+i-j]+=arr[i][j];
        }
    }
    
    long long int max1=p[1+1-1]+s[n+1-1]-arr[1][1],max2=p[1+2-1]+s[n+1-2]-arr[1][2];
    FOR(i,1,n){
        FOR(j,1,n){
            if(p[i+j-1]+s[n+i-j]-arr[i][j]>max1){
                if((x1+y1)%2!=(i+j)%2){
                    x2=x1;
                    y2=y1;
                    max2=max1;
                }
                x1 = i;
                y1 = j;
                max1 = p[i+j-1]+s[n+i-j]-arr[i][j];

            }
            else if(p[i+j-1]+s[n+i-j]-arr[i][j]>max2 && (x1+y1)%2!=(i+j)%2){
                max2 = p[i+j-1]+s[n+i-j]-arr[i][j];
                x2=i;
                y2=j;
            }
        }
    }

    cout<<max1+max2<<endl;
    cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
    return 0;
}


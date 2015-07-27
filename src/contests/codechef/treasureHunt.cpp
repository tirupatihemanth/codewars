#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <iomanip>
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

int arr1[26], arr2[26];
int main(){

    int T;
    cin>>T;

    string str1, str2;
    int d,ans=0;
    while(T--){
        cin>>str1>>str2>>d;
        
        tr(str1, it){
            arr1[*it - 'a']++;
        }

        tr(str2, it){
            arr2[*it - 'a']++;
        }

        REP(i,0,26){
            ans+=abs(arr1[i]-arr2[i]);   
        }

        if(ans>d){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

        ans=0;
        memset(arr1,0,sizeof(arr1));
        memset(arr2,0,sizeof(arr2));
    }

    return 0;
}


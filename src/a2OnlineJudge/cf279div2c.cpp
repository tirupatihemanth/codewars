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

int main(){

    string num;
    cin>>num;
    int a,b;
    cin>>a>>b;
    //reverse(num.begin(), num.end());
    vector<int> arr(num.size()+1);
    vector<int> brr(num.size()+1);
    vector<int> crr(num.size()+1);

    arr[0]=0;
    brr[0]=1;
    crr[0]=0;

    REP(i,0,num.size()){
        arr[i+1] = ((arr[i]*10)%a+((num[i]-'0')%a))%a;        
    }

    REP(i,0,num.size()){
        brr[i+1] = ((brr[i]%b)*(10%b))%b;
    }
    
    REP(i,0,num.size()){
        crr[i+1] = ((((num[num.size()-1-i]-'0')%b)*(brr[i]%b))%b+crr[i]%b)%b;      
    }
    
    FOR(i,1,num.size()){
        if(arr[i]==0 && i!=num.size() && crr[num.size()-i]==0 && (num[i]-'0')!=0){
            cout<<"YES"<<endl;
            cout<<num.substr(0,i)<<endl;
            cout<<num.substr(i,num.size()-i)<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}


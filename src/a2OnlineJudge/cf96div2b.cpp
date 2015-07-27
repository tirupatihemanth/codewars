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

int N=1000003;
string getVal(char ch){
    switch(ch){
        case '>':
            return "1000";
            break;
        case '<':
            return "1001";
            break;
        case '+':
            return "1010";
            break;
        case '-':
            return "1011";
            break;
        case '.':
            return "1100";
            break;
        case ',':
            return "1101";
            break;
        case '[':
            return "1110";
            break;
        case ']':
            return "1111";
            break;
    }
}

int main(){

    string str;
    cin>>str;
    string bin;
    tr(str,it){
        bin+=getVal(*it);
    }
    
    reverse(all(bin));

    vector<int> arr(bin.size());

    arr[0]=1;
    
    FOR(i,1,bin.size()-1){
        arr[i] = ((arr[i-1]%N)*2)%N;   
    }
    
    int ans=0;

    REP(i,0,bin.size()){
        ans = (ans + arr[i]*(bin[i]-'0'))%N;        
    }
    cout<<ans<<endl;
    return 0;
}


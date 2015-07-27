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

    string str1,str2;
    cin>>str1;
    int n = str1.size();
    int var=1;
    char prev=str1[0];
    str2+=str1[0];
    REP(i,1,n){
        if(str1[i] == prev){
            var++;
            if(var==3){
                var=2;    
            }
            else{
                str2+=str1[i];
            }
        }
        else{
            str2+=str1[i];
            var=1;
            prev = str1[i];
        }
    }

    str1="";
    
    int j=0;
    while(j<str2.size() && j<3){
        str1+=str2[j];
        j++;
    }

    REP(i,3,str2.size()){
        if(!(str2[i] == str1[str1.size()-1] && str1[str1.size()-2] == str1[str1.size()-3])){
            str1+=str2[i];
        }    
    }

    cout<<str1<<endl;
    return 0;
}


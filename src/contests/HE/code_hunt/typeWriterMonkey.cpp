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

int main(){

    int T,k,l,s,i,j;
    bool flag = false;
    cin>>T;
    int uchars;

    string letters, target;
    while(T--){
        uchars=0;
        cin>>k>>l>>s>>letters>>target;
    set<char> var(letters.begin(), letters.end());
    letters.assign(var.begin(), var.end());
    //now letters is free from duplicates

    for(i=0;i<l;i++){
        flag = false;
        for(j=0;j<sz(letters);j++){
            if(letters[j] == target[i]){
                flag = true;
                break;
            }
        }
        if(!flag){
            cout<<0<<endl;
            return 0;
        }
    }

     
        
    }
    return 0;
}

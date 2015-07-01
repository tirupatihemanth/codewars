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
    
    string str1, str2;
    int T;
    cin>>T;
    int min,max;
    while(T--){
        min=0,max=0;
        cin>>str1>>str2;
        for(int i=0;i<str1.size();i++){
        if(str1[i]=='?' || str2[i]=='?'){
            max++;
        }
        else{
            if(str1[i]!=str2[i]){
                min++;
                max++;
            }
        }
        }
        cout<<min<<" "<<max<<endl;

    }
    return 0;
}

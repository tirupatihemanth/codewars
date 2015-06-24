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

    int n,m;
    cin>>n>>m;
    vector<string> message(n);
    map<string, string> words;
    string temp1, temp2;
    for(int i=0;i<m;i++){
        cin>>temp1>>temp2;
        words[temp1] = temp2;
    }

    for(int i=0;i<n;i++){
        cin>>message[i];
        if(message[i].size()>words[message[i]].size()){
            cout<<words[message[i]]<<" ";
        }
        else{
            cout<<message[i]<<" ";
        }
    }

    cout<<endl;
    
    return 0;
}

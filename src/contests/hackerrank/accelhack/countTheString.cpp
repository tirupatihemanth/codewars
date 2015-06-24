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


bool mySort(const pair<int, char> &var1, const pair<int, char> &var2){

    if(var1.first-var2.first!=0){
        return var1.first>var2.first;
    }
    else{
        return var1.second<var2.second;
    }

}

int main(){

    string input;

    int T;
    int n,i, k;
    pair<int, char> arr[26];
    cin>>T;
    while(T--){
        cin>>n>>k;
        cin>>input;
        for(i=0;i<26;i++){
            arr[i].second = 'a'+i;
            arr[i].first = 0;
        }

        for(i=0;i<input.size();i++){
            arr[input[i]-'a'].first++;
        }

        sort(arr, arr+26, mySort);
        if(arr[0].first<=k){
            cout<<"NONE"<<endl;
            continue;
        }

        for(i=0;i<26;i++){
            if(arr[i].first<=k){
                break;
            }
            else{
                cout<<arr[i].second;
            }
        }
        cout<<endl;
    }
    return 0;
}

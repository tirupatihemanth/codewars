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

bool mySort(pair<string, char> &var1, pair<string, char> &var2){
    return var1.first.size()<var2.first.size();
}
int main(){

    string temp;

    vector<pair<string, char> > arr(4);

    int i;
    for(i=0;i<4;i++){
        cin>>temp;
        temp = temp.substr(2);
        arr[i] = make_pair(temp, 'A'+i);
    }

    sort(arr.begin(), arr.end(), mySort);

    if(arr[3].first.size()>=2*arr[2].first.size()){
        if(arr[0].first.size()*2>arr[1].first.size()){
            cout<<arr[3].second<<endl;
        }
        else{
            cout<<'C'<<endl;
        }
        return 0;

    }

    if(arr[0].first.size()*2<=arr[1].first.size()){
        if(arr[3].first.size()<2*arr[2].first.size()){
            cout<<arr[0].second<<endl;
        }
        else{
            cout<<'C'<<endl;
        }
        return 0;
    }

    cout<<'C'<<endl;
    
    return 0;
}

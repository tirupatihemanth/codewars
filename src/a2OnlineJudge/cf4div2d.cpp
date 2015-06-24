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



bool myUnique(pair<pair<long long int, long long int>, long long int > &var1, pair< pair<long long int, long long int> , long long int > &var2){
    
    if(var2.first.first>var1.first.first && var2.first.second>var1.first.second){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    
    long long int n, w, h;
    vector< pair< pair<long long int, long long int> ,long long int> > arr;    
    cin>>n>>w>>h;

    long long int i, j=1;
    long long int temp1, temp2;
    for(i=0;i<n;i++){
        cin>>temp1>>temp2;
        if(temp1>w && temp2 > h){
            arr.push_back(make_pair(make_pair(temp1, temp2), j));
        }
        j++;
    }

    if(arr.size() == 0){
        cout<<0<<endl;
        return 0;
    }

    sort(arr.begin(), arr.end());
    
    arr.erase(unique(arr.begin(), arr.end(), myUnique), arr.end());

    cout<<arr.size()<<endl;

    for(i=0;i<arr.size();i++){
        cout<<arr[i].second<<" ";
    }
    cout<<endl;
    return 0;
}

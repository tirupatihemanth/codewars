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

    int n;
    cin>>n;

    vector<pair<int, int> > var;

    int i, x, y, z, val1, val2, val3, temp;

    for(i=1;i<=n;i++){
        cin>>temp;
        var.push_back(make_pair(temp, i));
    }
    sort(var.begin(), var.end());

    x=0,val1=0, val2=0,val3=0;
    if(var[0].first != 1){
        cout<<0<<endl;
        return 0;
    }
    i=0;
    while(i<n){
        if(var[i].first == 1){
            val1++;
        }
        else{
            break;
        }
        i++;
    }

    y=i;
    if(var[i].first !=2){
        cout<<0<<endl;
        return 0;
    }
    while(i<n){
        if(var[i].first == 2){
            val2++;
        }
        else{
            break;
        }
        i++;
    }

    z=i;
    if(var[i].first!=3){
        cout<<0<<endl;
        return 0;
    }
    
    while(i<n){
        if(var[i].first == 3){
            val3++;
        }
        else{
            break;
        }
        i++;
    }

    if(val1<=min(val2, val3)){
        cout<<val1<<endl;
        while(val1--){
            cout<<var[x].second<<" "<<var[y].second<<" "<<var[z].second<<endl;
            x++,y++,z++;
        }
    }
    else if(val2<=min(val1, val3)){
         cout<<val2<<endl;
         while(val2--){
            cout<<var[x].second<<" "<<var[y].second<<" "<<var[z].second<<endl;
            x++,y++,z++;
         }
    }
    else{
        cout<<val3<<endl;
        while(val3--){
            cout<<var[x].second<<" "<<var[y].second<<" "<<var[z].second<<endl;
            x++,y++,z++;
        }
    }
    return 0;
}

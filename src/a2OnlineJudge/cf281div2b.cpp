#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <iomanip>
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

    int n,var;
    long long int sum1=0,sum2=0;
    cin>>n;
    vector<int> first, second;
    REP(i,0,n){
        cin>>var;
        if(var>0){
            first.push_back(var);
            sum1+=var;
        }
        else{
            second.push_back(-var);
            sum2-=var;
        }
    }
    if(sum1>sum2){
        cout<<"first"<<endl;
    }
    else if(sum2>sum1){
        cout<<"second"<<endl;
    }
    else{
        int i=0,j=0;
        
        while(i<first.size() && j<second.size()){
            if(first[i]>second[i]){
                cout<<"first"<<endl;
                return 0;
            }
            else if(second[i]>first[i]){
                cout<<"second"<<endl;
                return 0;
            }
            i++;j++;
        }
        if(first.size()>second.size()){
            cout<<"first"<<endl;
        }
        else if(first.size()< second.size()){
            cout<<"second"<<endl;
        }
        else{
            if(var>0){
                cout<<"first"<<endl;
            }   
            else{
                cout<<"second"<<endl;
            }

        }
    }

    return 0;
}


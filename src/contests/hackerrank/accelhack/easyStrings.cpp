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

    string str, strcpy;
    string temp, temp1, temp2;
    cin>>str;
    int i;
    if(str.size()<3){
        cout<<0<<endl;
        return 0;
    }
    int j,ans=0;
    strcpy = str;
    if(str.size()%2==0){
        for(j=0;j<2;j++){
            for(i=2;i<str.size()-1;i+=2){
                temp =str.substr(i);
                temp1 = temp.substr(0, temp.size()/2);
                temp2 = temp.substr(temp.size()/2);
                if(temp1.compare(temp2) == 0){
                    ans++;
                }
            }
            if(j==0){
            reverse(str.begin(), str.end());
            }
        }
        
        if(strcpy.compare(str)==0){
            ans+=(str.size()/2)-1;
        }
        
    }
    else{
        for(j=0;j<2;j++){
            for(i=1;i<str.size()-1;i+=2){
                temp = str.substr(i);
                temp1 = temp.substr(0, temp.size()/2);
                temp2 = temp.substr(temp.size()/2);
                if(temp1.compare(temp2) == 0){
                    ans++;
                }
            }
            if(j==0){
            reverse(str.begin(), str.end());
            }
        }
        if(strcpy.compare(str)==0){
            ans+=(str.size()/2);
        }

    }
    cout<<ans<<endl;
    return 0;
}

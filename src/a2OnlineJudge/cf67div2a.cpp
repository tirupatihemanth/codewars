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

    int a, b;
    cin>>a>>b;

    int c = a+b;

    stringstream strm;
    strm<<a<<" "<<b<<" "<<c;

    string str1, str2, str3;
    strm>>str1>>str2>>str3;

    for(string::iterator it = str1.begin();it!=str1.end();){
        if(*it == '0'){
            str1.erase(distance(str1.begin(), it),1);
        }
        else{
            it++;
        }
    }
    for(string::iterator it = str2.begin();it!=str2.end();){
        if(*it == '0'){
            str2.erase(distance(str2.begin(), it),1);
        }
        else{
            it++;
        }
    }
    for(string::iterator it = str3.begin();it!=str3.end();){
        if(*it == '0'){
            str3.erase(distance(str3.begin(),it),1);
        }
        else{
            it++;
        }
    }

    strm.str("");
    strm.clear();
    strm<<str1<<" "<<str2<<" "<<str3;
    strm>>a>>b>>c;
    if(a+b == c){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}

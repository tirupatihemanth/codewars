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

    string str;
    cin>>str;

    int i, j=-1;
    int size = str.size()-1;
    for(i=0;i<size;i++){
        if((str[i]-'0')%2==0){
            if(str[i]<str[size]){
                swap(str[i], str[size]);
                cout<<str<<endl;
                return 0;
            }
            else{
                j=i;    
            }
        }
    }

    if(j==-1){
        cout<<-1<<endl;
    }
    else{
        swap(str[j], str[size]);
        cout<<str<<endl;
    }
    return 0;
}

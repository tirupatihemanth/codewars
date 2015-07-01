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
    cin>>str1>>str2;
    int m = str1.size();
    int n = str2.size();

    if(m<n){
        cout<<"need tree"<<endl;
        return 0;
    }


    int j=0;
    for(int i=0;i<str1.size();i++){
        if(str1[i]==str2[j]){
            j++;
            if(j == str2.size()){
                cout<<"automaton"<<endl;
                return 0;
            }
        }
    }

    if(m==n){
     
        for(int i=0;i<n;i++){
            size_t found = str1.find(str2[i]);
            if(found == string::npos){
                cout<<"need tree"<<endl;
                return 0;
            }
            else{
                str1[found] = 'A';
            }
        }
        cout<<"array"<<endl;
    }
    else{
        
        for(int i=0;i<n;i++){
            size_t found = str1.find(str2[i]);
            if(found == string::npos){
                cout<<"need tree"<<endl;
                return 0;
            }
            else{
                str1[found]='A';
            }
        }
        cout<<"both"<<endl;
    }
    
    return 0;
}

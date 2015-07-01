#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <iomanip>
#include <stack>

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

string str;
void get(int var){

    int j=1;
    int k = 0;
    char prev = str[0];
    while(k<str.size()){
        if(prev!=str[k]){
            j++;
            prev = str[k];
        }
        if(var == j){
            k++;
            break;
        }
        else{
            cout<<str[k];
        }
        k++;
    }
    while(k<str.size()){
        cout<<str[k];
        k++;
    }
    cout<<endl;
    return;
}

int main(){
    
    int T,k,i,j;
    cin>>T;
    stack<int> sk;
    
    while(T--){
        cin>>str;
        cin>>k;
        for(i=0;i<str.size();i++){
            if(str[i] == '('){
                sk.push(str[i]);
            }
            else{
                if(!sk.empty()){
                    sk.pop();
                }
                else{
                    i = str.size();
                }
            }
        }
        
        if(i == str.size()+1 || !sk.empty()){
            while(!sk.empty()){
                sk.pop();
            }
            if(k == 1){
                cout<<str<<endl;
                continue;
            }    
            else{
                cout<<-1<<endl;
                continue;
            }
        }


        i=str.size();
        char prev = str[str.size()-1];
        j=1;
        while(i--){
            if(prev != str[i]){
                j++;
                prev = str[i];
            }
        }
        if(k>j){
            cout<<-1<<endl;
            return 0;
        }
        else{
            if(k<=ceil(j/2)){
                get(2*k);    
            }
            else{
                get((2*(j-k)+1));
            }
        }
    }
    return 0;
}

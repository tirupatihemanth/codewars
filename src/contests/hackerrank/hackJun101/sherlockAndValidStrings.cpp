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
    sort(all(str));
    
    int i,var1=0, var2=0,num=0;
    char cur=str[0];
    for(i=0;i<str.size();i++){
        if(str[i] == cur){
            var1++;
        }
        else{
            cur = str[i];
            break;
        }
    }

    int var= -1;
    for(;i<str.size();i++){
        if(str[i] == cur){
            var2++;
        }
        else{
            if(var2 == var1){
                var = var2;     
            }
            else{
                num++;
            }
            cur = str[i];
            break;
        }
    }
    int last=0;
    if(var2==0){
        cout<<"YES"<<endl;
        return 0;
    }
    else if(var == -1){
        if(abs(var1-var2)!=1){
            cout<<"NO"<<endl;
            return 0;
        }
        else{
            for(;i<str.size();i++){
                if(str[i]==cur){
                    last++;           
                }
                else{
                    cur = str[i];
                    break;
                }
            }
            if(last == var1 || last == var2){
                var = last;
            }    
            else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    
    var1=0;
    if(var!=-1){
        for(;i<str.size();i++){
            if(str[i]==cur){
                var1++;
            }
            else{
                if(var1!=var){
                    if(num){
                        cout<<"NO"<<endl;
                        return 0;
                    }
                    num++;
                }
                
                cur = str[i];
                var1=1;
            }
        }
    
        if(var1!=var && num){
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int T, ans,var;
    cin>>T;



     string str1, str2; 

    while(T--){

     cin >>str1>>str2;
        ans=0;
        var = str1.size()>str2.size()?str2.size():str1.size();
        while((--var)!=-1){
            if(str1[var] == str2[var]){
                ans++;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}

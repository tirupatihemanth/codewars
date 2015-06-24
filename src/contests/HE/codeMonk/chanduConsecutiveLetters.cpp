#include <iostream>
#include <string>

using namespace std;

int main(){

    int T;

    cin>>T;
    string str;
    string::iterator temp;
    while(T--){
        cin >>str;
        temp = str.begin();

        for(string::iterator it = str.begin()+1;it!=str.end();){
            if(*it == *temp){
                str.erase(it);
            }else{
                temp = it;
                it++;
            }
            
        }

        cout<<str<<endl;   
    }
    return 0;
}

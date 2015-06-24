#include <iostream>
#include <string>

using namespace std;

int main(){

    string str;
    cin>>str;

    string str_copy = str;
    int var1, var2;
    var1 = str.find("AB");
    var2 = str_copy.find("BA");
    if(var1<str.size() && var2<str_copy.size()){
    
        str.erase(var1,2);
        str.insert(str.begin()+var1, 'C');
        //cout<<str<<endl;
        if(str.find("BA")<str.size()){
            cout<<"YES"<<endl;    
            return 0;
        }
        else{
            str_copy.erase(var2, 2);
            str_copy.insert(str_copy.begin()+var2,'C');

            if(str_copy.find("AB")<str_copy.size()){
                cout<<"YES"<<endl;
                return 0;
            }
            else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
    
    cout<<"NO"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}

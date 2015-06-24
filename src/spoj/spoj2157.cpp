#include <iostream>
#include <string>

using namespace std;

int main(){

    int T;
    string x, y, z;
    cin>>T;
    while(T--){
        cin >> x >>y>>y>>z>>z;
        //cout<<x+" "+y+" "+z<<endl;
        if(x.find("machula")!= x.npos){
            cout<<stoi(z)-stoi(y)<<" + "+y+" = "+z<<endl;
        }
        else if(y.find("machula")!=y.npos){
            cout<<x+" + "<<stoi(z)-stoi(x)<<" = "+z<<endl;
        }
        else{
            cout<<x+" + "+y+" = "<<stoi(x)+stoi(y)<<endl;
        }
    }
    return 0;
}

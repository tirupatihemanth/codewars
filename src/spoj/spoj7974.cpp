#include <iostream>

using namespace std;

int main(){

    int a, b, c;
    
    while(true){
    
        cin >>a>>b>>c;
        //cout<<a<<b<<c;
        if(a == b && b==c && c==a && a==0){
            break;
        }

        if(b-a == c-b){
            cout<<"AP "<<c+b-a<<endl;
        }
        else{
            cout<<"GP "<<c*(c/b)<<endl;
        }
    }
    return 0;
}

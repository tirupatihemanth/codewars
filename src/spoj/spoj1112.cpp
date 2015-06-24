#include <iostream>

using namespace std;

int main(){

    int T, x, y;
    cin >>T;
    
    while(T--){
        cin >>x;
        cin >>y;
        if( x!=(y+2) && x!=y){
            cout<< "No Number"<<endl;
        }
        else if( x == y){
            if(x%2 == 0){
                cout << 2*x<<endl;
            }
            else{
                cout << 2*(x-1)+1<<endl;
            }
        }
        else{
            if(x%2 == 0){
                cout << x+y<<endl;
            }
            else{
                cout << x+y-1<<endl;
            }
        }
    }
    return 0;
}

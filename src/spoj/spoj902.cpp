#include <iostream>

using namespace std;

int main(){

    float num;
    int i;
    while(true){
        cin>>num;
        if(num == 0.0){
            break;
        }
        i = 2;
        while(num>0){
            num-=(1.0/i);
            i++;
        }

        cout<<i-2<<" card(s)"<<endl;
    }

    return 0;
}

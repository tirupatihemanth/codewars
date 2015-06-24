#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int T, i, ans;
    short base;
    long int exp;
    int arr[] = {0, 0, };
    cin>>T;

    while(T--){
        cin>>base>>exp;
        ans=1;
        base = base%10;

        while(exp>0){
            if(exp%2 == 1){
                ans = (ans*base)%10;
            }
            exp = exp >> 1;
            base = (base*base)%10;
        }
        cout<<ans<<endl;
    }
    return 0;
}

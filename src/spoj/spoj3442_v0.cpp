#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int T, i, ans;
    short a;
    long int b;
    int arr[] = {0, 0, };
    cin>>T;
    while(T--){ 
        cin>>a>>b;
        ans = 1;
        for(i=1;i<=b;i++){
            ans = (ans*a)%10;
            if( 2*i <= b){
                i=2*i;
                ans = ((int)pow(ans, 2))%10;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

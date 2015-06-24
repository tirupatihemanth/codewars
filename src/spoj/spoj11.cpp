#include <iostream>

using namespace std;

int main(){
    
    long long int N;
    int T;
    cin>> T;
    int ans;

    while(T--){
        cin >> N;
        ans = 0;

        while(N>0){
            ans+=(N/5);
            N = N/5;
        }
        cout<<ans<<endl;
    }
}

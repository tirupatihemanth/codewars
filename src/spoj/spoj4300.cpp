#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    int i, ans=0, N, K;
    cin >> K;
    
    for(N = 1;N<=K;N++){

    for(i=1;i<=sqrt(N);i++){
        if(N%i == 0){
            ans++;
        }
    }
    
    }

    cout<<ans<<endl;
    return 0;
}

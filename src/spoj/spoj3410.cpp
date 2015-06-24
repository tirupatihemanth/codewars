#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int N, ans;
    while(true){

        cin>>N;
        if(N==0){
            break;
        }
        ans = 0;    
        for(int i=1;i<=N;i++){
            ans+= pow((N-i+1), 2);   
        }
        cout<<ans<<endl;

    }
    return 0;
}

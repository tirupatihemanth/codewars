#include <iostream>

using namespace std;

int main(){

    long long int T,i, ans, val, N;
    cin>>T;

    while(T--){
        ans=0;
        cin>>N;
        for(i=0;i<N;i++){
            cin>>val;
            ans+=(val%N);
        }
        //cout<<"ans: "<<ans<<endl;
        if(ans%N == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}

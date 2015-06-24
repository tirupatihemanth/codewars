#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){

    int T;
    cin>>T;
    
    int r,i,j,k;
    short flag=0;
    int temp;
    int cool[100001] = {0};

    for(i = 1; i<=100000;i++){
        flag = 0;
        temp = 1;
        for(j=0;j<32;j++){
             if(flag == 0){
                if(temp & i){
                    flag = 1;
                }
                else{
                    flag = 0;
                }
             }
             else if(flag == 1){
                if( !(temp & i)){
                    flag = 2;
                }
                else{
                    flag = 1;
                }
             }
             else if(flag == 2){
                if(temp & i){
                    cool[i]++;
                    flag = 1;
                }
                else{
                    flag = 0;
                }
             } 
        temp = temp<<1;
        }
        

    }

    //for(i=1;i<100001;i++){
    //    cout<<cool[i]<<endl;
    //}

    //cout<<cool[5]<<" "<<cool[21]<<endl;

    int ans;
    while(T--){
        cin >>r>>k;
        ans = 0;
        for(i=1;i<=r;i++){
            if(cool[i]>=k){
                ans++;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}

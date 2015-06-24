#include <iostream>

using namespace std;

int main(){

    int T, N, *arr;

    cin>>T;
    bool flag; 
    int i,j,sum,ans;
    while(T--){
        cin>>N>>sum;
        arr = new int[N];

        for(i=0;i<N;i++){
            cin>>arr[i];
        }
        flag = false;        
        for(i=0;i<N;i++){
            j=i;
            ans=0;
            while(j<N){
                ans+=arr[j];
                if(ans==sum){
                    cout<<"YES"<<endl;
                    flag = true;
                    break;
                }
                else if(ans>sum){
                    break;
                }
                j++;
            }
            if(flag){
                break;
            }
        }
        if(flag){
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}

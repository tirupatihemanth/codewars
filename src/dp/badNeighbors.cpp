#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    int *arr = new int[N+1];
    int *sum = new int[N+1];
    
    for(int i=1;i<N+1;i++){
        cin>>arr[i];
        sum[i]=0;
    }
    
    sum[1] = arr[1];
    int temp1, temp2;
    for(int i=2;i<N;i++){
        
        temp1 = i-2>0?arr[i]+sum[i-2]:arr[i];
        temp2 = i-3>0?arr[i-1]+sum[i-3]: arr[i-1];
        if(temp1>temp2){
            sum[i] = temp1;
        }    
        else{
            sum[i] = temp2;
        }   
    }

    int ans = sum[N-1];
    sum[2] = arr[2];
    for(int i=3;i<N+1;i++){
        temp1 = i-2>1?arr[i]+sum[i-2]:arr[i];
        temp2 = i-3>1?arr[i-1]+sum[i-3]:arr[i-1];
        if(temp1>temp2){
            sum[i] = temp1;
        }
        else{
            sum[i] = temp2;
        }
    }
    
    if(ans>sum[N]){
        cout<<ans;
    }
    else{
        cout<<sum[N];
    }

    cout<<endl;

}

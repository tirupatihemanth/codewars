#include <iostream>
#include <climits>
using namespace std;

//example dp problem
//any number of coins with a given value can be used
//to find the minimum number of coins needed to form sum s

int main(){

    int i,N,S,val,j;
    cin>>N>>S;
    int *arr = new int[N], *sum = new int[S+1];
    for(i=0;i<N;i++){
        cin>>arr[i];    
    }
    //base case i.e minimum number of coins needed to form 0 sum is 0
    sum[0] = 0;
    for(i=1;i<=S;i++){
        sum[i] = INT_MAX;
    }
    for(i=1;i<=S;i++){
        for(j=0;j<N;j++){
            val = arr[j];
            if(val<=i && sum[i-val]+1<sum[i]){
                sum[i] = sum[i-val]+1;
            }
        }   
    }
    cout<<sum[S]<<endl;
    return 0;
}

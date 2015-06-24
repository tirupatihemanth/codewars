#include <iostream>
#include <string>

using namespace std;

int main(){

    int i, N;
    cin>>N;
    int *arr = new int[N+1];
    int *len = new int[N+1];

    for(i=1;i<N+1;i++){
        cin>>arr[i];
    }
    
    //In this dp state denotes the length of the longest sequence to the i is stored in len[i]

    //initial state the number itself is the longest sequence
    
    for(i=1;i<N+1;i++){
        len[i]=1;
    }
    int j;
    for(i=2;i<N+1;i++){
        for(j=1;j<i;j++){
            if( arr[j] <= arr[i] && len[j]+1>len[i]){
                len[i] = len[j]+1;
            }
        }
    }
    for(i=0;i<=N;i++){
        cout<<len[i]<<endl;
    }
    cout<<len[N]<<endl;
    delete [] arr;
    return 0;
}

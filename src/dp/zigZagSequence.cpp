#include <iostream>

using namespace std;

int main(){

    int N,i,j;
    cin>>N;
    int *arr = new int[N+1];
    int *seqLen = new int[N+1];
    short *stat = new short[N+1];

    for(i=1;i<N+1;i++){
        cin>>arr[i];
    }
    
    for(i=1;i<N+1;i++){
        seqLen[i] = 1;
        stat[i]=0;
    }
    
    for(i=2;i<N+1;i++){
        for(j=1;j<i;j++){
            switch(stat[j]){
                case 0:
                    if(arr[i]-arr[j]>0){
                        stat[i] = 1;
                        seqLen[i] = seqLen[j]+1;
                    }
                    else if(arr[i]-arr[j]<0){
                        stat[i] = 2;
                        seqLen[i] = seqLen[j]+1;
                    }
                break;
                case 1:
                    if(arr[i]-arr[j]<0 && seqLen[j]+1>seqLen[i]){
                        seqLen[i] = seqLen[j]+1;
                        stat[i] = 2;
                    }
                break;
                case 2:
                    if(arr[i]-arr[j]>0 && seqLen[j]+1>seqLen[i]){
                        seqLen[i] = seqLen[j]+1;
                        stat[i] = 1;
                    }
                break;
            }
        } 
    }
    
    cout<<seqLen[N]<<endl;
    
    delete [] arr;
    return 0;
}

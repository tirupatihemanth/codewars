#include <iostream>

using namespace std;

int main(){

    int N,i,j;
    cin>>N;

    int *donations = new int[N+1];
    int *funds = new int[N+1];
    int *stat = new int[N+1];
    bool *first = new bool[N+1];

    for(int i=1;i<N+1;i++){
       cin >> donations[i];
    }
    
    
    for(int i=1;i<N+1;i++){
        funds[i] = donations[i];
        stat[i] = i;
        first[i]=false;
    }
    first[1] = true;
    
    for(i=2;i<N;i++){
        stat[i] = stat[i-1];
        funds[i] = funds[i-1];
        for(j=1;j<i-1;j++){
            if(funds[j]+donations[i]>funds[i]){
                funds[i] = funds[j]+donations[i];
                stat[i] = i;
                if(first[j]){
                    first[i]=true;   
                }
            }   
        }
        if(stat[j] < i-1){
            if(funds[j]+donations[i]>funds[i]){
                funds[i] = funds[j]+donations[i];
                stat[i] = i;
                if(first[j]){
                    first[i] = true;
                }
            }
        }
        else{
            if(funds[j]-donations[j]+donations[i]>funds[i]){
                funds[i] = funds[j]-donations[j]+donations[i];
                stat[i] = i;
            }
            if(first[stat[i]]){
                first[i] = true;
            }
        }
    }
    
    stat[i] = stat[i-1];
    funds[N]=funds[N-1];
    for(j=1;j<N-1;j++){
        if(!first[j] && funds[j]+donations[i]>funds[i]){
            funds[i] = funds[j]+donations[i];
            stat[i] = i;
        }
    }
    
    if(stat[j]<i-1){
        if(!first[j] && funds[j]+donations[i]>funds[i]){
            funds[i] = funds[j]+donations[i];
            stat[i]=i;
        }
    }
    else{
        if( !first[stat[i]] && funds[j]-donations[j]+donations[i]>funds[i]){
            funds[i] = funds[j]-donations[j]+donations[i];
            stat[i]=i;
        }
    }

    cout<<funds[N]<<endl;
    delete [] stat;
    delete [] first;
    delete [] donations;
    delete [] funds;
    return 0;
}

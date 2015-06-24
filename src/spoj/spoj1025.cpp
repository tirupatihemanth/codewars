#include <iostream>
#include <algorithm>

using namespace std;

int main(){
 
    int T,i, N, sum,*boy, *girl;
    cin >>T;
    
    while(T--){
        sum=0;
        cin >> N;
        boy = new int[N];
        girl = new int[N];
        for(i=0;i<N;i++){
            cin>>boy[i];
        }

        for(i=0;i<N;i++){
            cin>>girl[i];
        }

        sort(boy, boy+N);
        sort(girl, girl+N);
        for(i=0;i<N;i++){
            sum+=boy[i]*girl[i];
        }

        cout<<sum<<endl;
        delete [] boy;
        delete [] girl;
    }

    return 0;
}

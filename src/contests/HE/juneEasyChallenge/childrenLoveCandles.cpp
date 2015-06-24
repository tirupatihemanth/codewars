#include <iostream>

using namespace std;

int main(){

    int Q;
    cin>>Q;
    long long int N;
    short T;
    while(Q--){
        
        cin >>N>>T;
        while(T!=0){
            N = N/2;    
            N = N - N/4;
            T--;
        }
        
        cout<<N<<endl;
    }
    return 0;
}

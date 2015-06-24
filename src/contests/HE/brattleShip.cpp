#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int T, r, c, w;

    cin >>T;
    while(T--){
    
        cin>>r>>c>>w;
        if(c%2==0){
            cout<< r*(c/w)+ceil((c-(c*1.0/w))/2)<<endl;
        }
        else{
            cout<< r*ceil((c*1.0/w))+(c-(c/w))/2<<endl;
        
        }
    
    }

    return 0;
}

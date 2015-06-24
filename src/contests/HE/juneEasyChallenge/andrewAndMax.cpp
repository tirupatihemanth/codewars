#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

    int T;
    int x, y, z;
    double var1, var2,ans;
    cin>>T;
    
    while(T--){
    
        cin >>x>>y>>z;
        var1 = pow(x+y+z, 2);
        var1 = var1*1.0/2;

        var2 = pow(x-y,2)*1.0+pow(y-z,2)*1.0+pow(z-x,2)*1.0;
        ans = (var1-var2)/3;
        cout<<fixed<<setprecision(2)<<ans<<endl;
        
    }
    return 0;
}

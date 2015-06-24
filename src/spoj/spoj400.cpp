#include <iostream>
#include <string>

using namespace std;

int main(){

    int col, i, j, size;
    string exp;

    while(true){
        cin >>col;
        if(col == 0){
            break;
        }
        cin >> exp;
        size = exp.size();
        //for(i=0;i<size;i++){
        //    cout<<i<<" : "<<exp[i]<<endl;
        //}
        for(i=0;i<col;i++){
            j = i;
            while(j<size){
                if((j/col)%2 == 0){
                    cout<<exp[j];
                }
                else{
                    // j+ 4 - (j-(j/col)*col)
                    cout<<exp[(j/col)*col+col-1-i];
                }
                j+=col;
            }
        }
        cout<<endl;
    }
    return 0;
}

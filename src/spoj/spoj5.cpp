#include <iostream>
#include <string>

using namespace std;

void correct(string &numStr, int i, int j){

    while(numStr[i] == '9' && i>-1 && j<numStr.size()){
        numStr[i] = '0';
        numStr[j] = '0';
        i--;
        j++;
    }
    if(i== -1){
        numStr='1'+numStr;
    }
    else{
        numStr[i]++;
    }
    numStr[j]++;


}
int main(){

    int i,j,T;
    cin >> T;
    string numStr;
    bool flag, change;

    while(T--){
        flag = false;
        change = false;
        cin >> numStr;ac
        i=0, j=numStr.size()-1;
        while(true){

            if(i<j){
                if(numStr.at(i) > numStr.at(j)){
                    numStr.at(j) = numStr.at(i);
                    flag = false;
                    change = true;
                }
                else if(numStr[i]<numStr[j]){
                    numStr[j] = numStr[i];
                    flag = true;
                    change = true;
                }
            }
            else if(i==j){
                if(flag || !change){
                    if(numStr[i]=='9'){
                        numStr[i] = '0';
                        correct(numStr, i-1, i+1);
                    }
                    else{
                        numStr[i]++;
                    }
                }
                break;
            }
            else if(i>j){
                if(flag || !change){
                    correct(numStr, i-1, j+1);
                }
                break;
            }

            i++;
            j--;
        }
        cout<<numStr<<endl;
    }
    return 0;
}

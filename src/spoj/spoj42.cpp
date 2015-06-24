#include <iostream>
#include <string>

using namespace std;


int main(){
    int N;
    string str1, str2;
    cin >> N;
    int sum=0, i;
    bool flag = true;


    while(N--){

    cin >> str1;
    cin >> str2;

    i = str1.size()-1;
    while(i>=0){
        if(str1.at(i) == '0'){
            i--;
        }
        else{
            break;
        }
    }
    str1 = str1.substr(0, i+1);
    i = str2.size() - 1;
    while(i>=0){
        if(str2.at(i) == '0'){
            i--;
        }
        else{
            break;
        }
    }
    str2 = str2.substr(0, i+1);

    //cout << str1 + " " << str1.size() << " " + str2 +" "<< str2.size() <<endl;

    if(str1.size()>str2.size()){
        string temp = str1;
        str1 = str2;
        str2 = temp;
    }

    //cout << str1 + " " + str2 << endl;
    


    for(i=0;i<str1.size();i++){
        sum += str1.at(i) - '0' + str2.at(i) - '0' ;
        if(sum<=9){
            cout<<sum;
            sum = 0;
            flag = false;
        }
        else if(flag){
            if(sum != 10){
                cout<< sum%10;
                flag = false;
            }
            sum = 1;
        }
        else{
            cout << sum%10;
            sum = 1;
        }
    }



    while(i< str2.size()){
        sum+= str2.at(i)-'0';
        if(sum<=9){
            cout<<sum;
            sum = 0;
            flag = false;
        }
        else if(flag){
            if(sum!=10){
            cout << sum%10;
            flag = false;
            }
            sum = 1;
        }
        else{
            cout << sum%10;
            sum = 1;
        }
        i++;
    }


    if(i>=str2.size()){
        if(sum!=0){
        cout << sum;
        }

    }
    cout<<"\n";
    flag = true;
    sum = 0;
    }

    return 0;
}


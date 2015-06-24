#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//fail for those numbers length >=3 but it has a two digit number  or single divisible by 8
//correction can be made by checking for two digit and a single digit numbers

int main(){

    string str;
    cin>>str;
    bool flag = false;
    int i,j,k;
    string num;
    if(str.size() == 1){
        if((str[0]-'0')%8==0){
            cout<<"YES"<<endl;
            cout<<str<<endl;
            return 0;
        }
    }
    else if(str.size()==2){
        if(atoi(str.c_str())%8==0){
            cout<<"YES"<<endl;
            cout<<str<<endl;
            return 0;
        }
        else{
            if((str[0]-'0')%8==0){
                cout<<"YES"<<endl;
                cout<<str[0]<<endl;
            }
            else if((str[1]-'0')%8==0){
                cout<<"YES"<<endl;
                cout<<str[1]<<endl;
                return 0;
            }
            else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    else{
        for(i=0;i<str.size();i++){
            if((str[i]-'0')%8==0){
                cout<<"YES"<<endl;
                cout<<str[i]<<endl;
                return 0;
            }
        }

        for(i=0;i<str.size();i++){
        
            for(j=i+1;j<str.size();j++){
                num="";
                num+=str[i];
                num+=str[j];
                if(atoi(num.c_str())%8==0){
                    cout<<"YES"<<endl;
                    cout<<num<<endl;
                    return 0;
                }
            }
        }
        for(i=0;i<str.size();i++){
            if(str[i]==0){
                continue;
            }
            for(j=i+1;j<str.size();j++){
                for(k=j+1;k<str.size();k++){
                    num="";
                    num+=str[i];
                    num+=str[j];
                    num+=str[k];
                    //cout<<num<<" bug"<<endl;
                    if(atoi(num.c_str())%8==0){
                        cout<<"YES"<<endl;
                        cout<<num<<endl; 
                        flag = true;
                        break;
                    }
                }
                if(flag){
                    break;
                }
            }
            if(flag){
                break;
            }
        }       
    }

    if(!flag){
        cout<<"NO"<<endl;
    }
    return 0;
}

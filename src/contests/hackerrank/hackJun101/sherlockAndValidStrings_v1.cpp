#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int arr[26];
int main() {
    
    string str;
    cin>>str;
    
    for(int i=0;i<str.size();i++){
        arr[str[i]-'a']++;
    }
    map<int,int> mySet;
    
    for(int i=0;i<26;i++){
        cout<<arr[i]<<" ";
               if(arr[i]){
               if(mySet.find(arr[i]) == mySet.end()){
                    mySet[arr[i]]=1;                     
               }          
                else{
                    mySet[arr[i]]++;
                }
               }

        
    }
    
    if(mySet.size()>=3){
        cout<<"NO"<<endl;
    }
    else if(mySet.size() == 1){
        cout<<"YES"<<endl;
        
    }
    else{
        map<int,int>::iterator it = mySet.begin();
        pair<int,int> var = *it;
        it++;
        pair<int,int> var2 = *it;
        if(abs(var.first - var2.first == 1)){
            cout<<"\n"<<var.second<<" "<<var2.second;
            if(var.second == 1 || var2.second == 1){
                cout<<"YES"<<endl;    
            }    
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            
            cout<<"NO"<<endl;
            return 0;
        }
    }
    return 0;
}


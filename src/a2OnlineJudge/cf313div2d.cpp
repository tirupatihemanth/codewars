#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <cstring>
#include <climits>

#define FOR(i,l,r) for(auto i=l;i<=r;i++)
#define REP(i,l,r) for(auto i=l;i<r;i++)
#define FORD(i,l,r) for(auto i=l;i>=r;i--)
#define REPD(i,l,r) for(auto i=l;i>r;i--)
#define ENDL cout<<endl
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define tr(c,i) for(auto i = (c).begin(); i!=(c).end(); i++)
#define present(c,x) ((c).find(x)!=(c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

int arr1[26], arr2[26], brr1[26], brr2[26];
int main(){
    
    string str1, str2;
    cin>>str1>>str2;
    
    if(str1.size()!=str2.size()){
        cout<<"NO"<<endl;
        return 0;
    }
    if(str1.size()%2){
        if(str1.compare(str2)==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        return 0;
    }

    if(str1.compare(str2)==0){
        cout<<"YES"<<endl;
        return 0;
    }
    
    REP(i,0,str1.size()/2){
        arr1[str1[i]-'a']++;    
    }   
    FOR(i,str1.size()/2,str1.size()-1){
        arr2[str1[i]-'a']++;
    }


    REP(i,0,str2.size()/2){
        brr1[str2[i]-'a']++;    
    }   
    FOR(i,str2.size()/2,str2.size()-1){
        brr2[str2[i]-'a']++;
    }

    int i;
    bool flag = false;
    for(i=0;i<26;i++){
        if(arr1[i]!=brr1[i]){
            flag = true;
            break;
        }    
    }
    if(!flag){

    for(i=0;i<26;i++){
        if(arr2[i]!=brr2[i]){
            flag = true;
            break;
        }    
    }
    if(flag){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
    }

    flag = false;
    for(i=0;i<26;i++){
        if(arr1[i]!=brr2[i]){
            flag = true;
            break;
        }
    }

    if(!flag){
    for(i=0;i<26;i++){
        if(arr2[i]!=brr1[i]){
            flag = true;
            break;
        }    
    }
    if(flag){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}


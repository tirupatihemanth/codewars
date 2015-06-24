#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <iomanip>
#include <climits>

#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i!=(c).end(); i++
#define present(c,x) ((c).find(x)!=(c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end()

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

int main(){

    long long int **arr;

    int n, m,i,j;
    cin>>m>>n;
    int k;
    cin>>k;
    vector<string> blocks;
    string str;
    int f = k;

    getline(cin, str);
    while(f--){
        getline(cin, str);
        blocks.push_back(str);
    }

    stringstream ss;

    int **var;
    if(k!=0){
        var = new int*[k];
    
    for(i=0;i<k;i++){
        var[i] = new int[4];
    }
    }
    for(i=0;i<k;i++){
        ss<<blocks[i]<<" ";
    }
    for(i=0;i<k;i++){
        for(j=0;j<4;j++){
            ss>>var[i][j];
        }
    }
    //ss>>str;
    //cout<<str<<" string"<<endl;
    //ss>>str;
    //cout<<ss.str()<<" string"<<endl;
    //cout<<str<<" string"<<endl;
    //ss>>str;
    //cout<<ss.str()<<" string"<<endl;
    //cout<<ss.str()<<" after"<<endl;
    
    //for(i=0;i<k;i++){
    //    for(j=0;j<4;j++){
    //        cout<<var[i][j]<<" ";
    //    }
     //   cout<<endl;
    //}

    arr = new long long int*[m+1];
    for(i=0;i<=m;i++){
        arr[i] = new long long int[n+1];
    }
    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            arr[i][j] = 0;
        }
    }

    //cout<<LLONG_MAX<<endl;
    int val, idx1, idx2;
    bool flag1, flag2;
    arr[0][0] =1;
    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            
            flag1 = false;
            flag2 = false;
            if(k!=0){ 
            for(idx1=0;idx1<k;idx1++){
                if(var[idx1][0] == i-1 && var[idx1][1] == j){
                    if(var[idx1][2] == i && var[idx1][3] == j){
                        flag1 = true;
                    }
                }
                else if(var[idx1][2] == i-1 && var[idx1][3] == j){
                    if(var[idx1][0] == i && var[idx1][1] == j){
                        flag1 = true;
                    }
                }
                if(var[idx1][0] == i && var[idx1][1] == j-1){
                    if(var[idx1][2] == i && var[idx1][3] == j){
                        flag2 = true;
                    }
                }
                else if(var[idx1][2] == i && var[idx1][3] == j-1){
                    if(var[idx1][0] == i && var[idx1][1] == j){
                        flag2 = true;
                    }
                }
            }
            }
            if(!flag1){
                arr[i][j] += i-1>=0?arr[i-1][j]:0;
            }
            if(!flag2){
                arr[i][j]+=j-1>=0?arr[i][j-1]:0;
            }

        }
    }
   
    cout<<arr[m][n]<<endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <iomanip>


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
    int N,i;
    cin>>N;

    int *arr = new int[N];
    bool flag = false;
    for( i=0;i<N;i++){
        cin>>arr[i];
    }

    if(arr[N-1] == 1){
        cout<<"NO"<<endl;
        return 0;
    }
    else{
        if(arr[N-2]==0){
            flag = true;
        }

        if(flag){
            for( i=N-3;i>=0;i--){
                if(arr[i]==1){
                    if(i==0){
                        cout<<"NO"<<endl;
                        return 0;
                    }
                    continue;
                }
                else{
                    break;
                }
            }
        }

    }
    cout<<"YES"<<endl;
    string ans;
    char var;
    ans=")";
    if(arr[N-1] == '0' && arr[N-2] == '1'){
        for(i = N-1;i>=0;i--){
            var = arr[i]+'0';
            ans= var+ans;
            if(i!=0){
            ans= "->"+ans;
            }
            else{
                ans = '('+ans;
            }
        }
    }
    else{
        ans="->0))->0"+ans;
        i = N-3;
        flag = false;
        while(i>=0){
            if(!flag){
                if(arr[i] == 1){
                    if((i-1>0) && arr[i-1]==1){
                        ans="->1"+ans;
                    } 
                    else{
                        ans = "(1"+ans;
                    }
                }
                else{
                    ans="(0->"+ans;
                    break;
                }
            }
        }

        while(i>=0){
        
            var = arr[i]+'0';
            ans = var+ans;
            if(i!=0){
                ans = "->"+ans;
            }
            else{
                ans = "("+ans;
            }
        }
    }

    cout<<ans<<endl;
    return 0;
}

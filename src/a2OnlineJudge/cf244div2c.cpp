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

int arr[100001];

int main(){
    
    int n;
    cin>>n;
    REP(i,0,n){
        cin>>arr[i];
    }

    sort(arr, arr+n);
    int ans=-1,num=0;
    int cd,var1,var2,var3;
    
    if(n==1){
        cout<<-1<<endl;
    }
    else if(n==2){
        cd = arr[1]-arr[0];
        if(cd==0){
            cout<<1<<endl;
            cout<<arr[0]<<endl;
            return 0;
        }
        if((arr[1]+arr[0])%2==0){
            cout<<3<<endl;
            cout<<arr[0]-cd<<" "<<(arr[1]+arr[0])/2<<" "<<arr[1]+cd<<endl;   
        }
        else{
            cout<<2<<endl;
            cout<<arr[0]-cd<<" "<<arr[1]+cd<<endl;
        }
    }
    else if(n==3){
        cd = arr[1]-arr[0];
        if(cd == arr[2]-arr[1]){
            if(cd==0){
                cout<<1<<endl;
                cout<<arr[0]<<endl;
                return 0;
            }
            cout<<2<<endl;
            cout<<arr[0]-cd<<" "<<arr[2]+cd<<endl;
        }
        else{

            if(arr[2]-arr[1]-cd == cd){
                cout<<1<<endl;
                cout<<arr[1]+cd;
            }
            else{
                cd = arr[2]-arr[1];
                if(arr[1]-arr[0]-cd==cd){
                    cout<<1<<endl;
                    cout<<arr[0]+cd;
                }
                else{
                    cout<<0<<endl;
                }
            }
        }
    }
    else if(n>=4){
        
        var1=arr[1]-arr[0];
        var2=arr[2]-arr[1];
        var3=arr[3]-arr[2];
        if(var1==var2){
            cd = var1;
        }   
        else if(var2==var3){
            cd=var3;
        }
        else if(var1==var3){
            cd = var1;
        }
        else{
            cout<<0<<endl;
            return 0;
        }
        REP(i,1,n){
            if(arr[i]-arr[i-1]!=cd){
                if(num){
                    cout<<0<<endl;
                    return 0;
                }
                ans = arr[i-1]+cd;
                num++;
                if(ans-arr[i-1]!=arr[i]-ans){
                    cout<<0<<endl;
                    return 0;
                }
            }
        }
        if(ans!=-1){
            cout<<1<<endl;
            cout<<ans<<endl;
        }
        else{
            if(cd==0){
                cout<<1<<endl;
                cout<<arr[0]<<endl;
                return 0;
            }
            cout<<2<<endl;
            cout<<arr[0]-cd<<" "<<arr[n-1]+cd<<endl;
        }
    }
    return 0;
}


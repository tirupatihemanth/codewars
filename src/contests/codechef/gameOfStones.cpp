#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <iomanip>
#include <cstring>

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

map<int,int> freq;

//Here we get exponentiation by squaring
//This function return (a^b)%m for large numbers such as a^b
//only for positive b wiki for all b

long long int m = (10e+9)+7;
int *mfact, *imfact;
long long int n,k,ones;

int mpow(int a, int b){
    
    if(b==0) return 1;
    else if(b==1) return a;
    else if(b%2==0) return mpow(a*a,b/2)%m;
    else return (a*mpow(a*a,(b-1)/2))%m;
    
}

int imfactrl(int a){
    if(a==1){
        imfact[1] = 1;    
    }
    else if(imfact[a]!=0){
        return imfact[a];
    }    
    else{
        imfact[a] = (mpow(a,m-2)*imfact[a-1])%m;        
    }
    return imfact[a];
}

int mfactrl(int a){
    if(a==1){
        mfact[1]=1;
    }
    else if(mfact[a]!=0){
        return mfact[a]; 
    }
    else{
        mfact[a] = (a*mfact[a-1])%m;       
    }
    return mfact[a];
}

int permut(int x){
    int ans;
    ans = (k*mfactrl(n-x))%m;
    ans = (ans*imfactrl(ones-x))%m;
    return ans;
} 


int main(){

    int T;
    cin>>T;
    int i,temp;

    long long int ans;
    while(T--){
        cin>>n;
        ans=0;
        mfact = new int[n+1];
        imfact = new int[n+1];
        memset(mfact, 0, sizeof(int)*(n+1));
        memset(imfact,0, sizeof(int)*(n+1));
        mfact[0]=1;
        imfact[0]=1;
        for(i=0;i<n;i++){
            cin>>temp;
            freq[temp]++;
        }

        vector<pair<int,int> > arr(freq.begin(), freq.end());
       
        for(i=1;i<n;i++){
            k = (k*mfactrl(arr[i].second))%m;
        }
        
        k = imfactrl(k);       
        ones=arr[0].second;

        if(arr.size() == 1){
            if(arr[0].first == 1){
                if(arr[0].second%2==0){
                    cout<<0<<endl;
                }
                else{
                    cout<<1<<endl;
                }
            }
            else{
                cout<<1<<endl;
            }
            return 0;
        }
        else if(arr[0].first!=1){
            cout<<permut(0);        
        }

        for(i=0;2*i+1<=ones;i++){
            ans+=(permut(2*i)-permut(2*i+1));           
        }

    }
    return 0;
}

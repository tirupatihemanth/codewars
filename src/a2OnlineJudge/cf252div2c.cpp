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
#define mp make_pair
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

int n,m,k;

bool arr[301][301];

void printRow(int, int, int);
void printCol(int, int, int);
void rprintRow(int, int ,int);
void rprintCol(int, int, int);
vector<pair<int, int> > ans;

void printRow(int i, int j, int num){
    
    while(j<=m&&num>0){
        if(!arr[i][j]){
            arr[i][j]=true;
            ans.push_back(mp(i,j));
            //cout<<i<<" "<<j<<" ";
            j++;num--;
        }
        else{
            break;
        }
    }
    
    if(num!=0){
        printCol(i+1,j-1,num);
    }
    
}

void printCol(int i, int j, int num){

    while(i<=n && num>0){
        if(!arr[i][j]){
            arr[i][j]=true;
            ans.push_back(mp(i,j));
            //cout<<i<<" "<<j<<" ";
            i++;num--;    
        }
        else{
            break;
        }
    }

    if(num!=0){
        rprintRow(i-1,j-1,num);
    }
}

void rprintRow(int i, int j, int num){
    while(j>=1 && num>0){
        if(!arr[i][j]){
            arr[i][j]= true;
            ans.push_back(mp(i,j));
            //cout<<i<<" "<<j<<" ";
            j--;num--;
        }
        else{
            break;        
        }
    }
    if(num!=0){
        rprintCol(i-1,j+1,num);
    }

}

void rprintCol(int i, int j, int num){
    while(i>=1 && num>0){
        if(!arr[i][j]){
            arr[i][j]=true;
            ans.push_back(mp(i,j));
            //cout<<i<<" "<<j<<" ";
            i--;num--;
        }
        else{
            break;
        }
    }

    if(num!=0){
            printCol(i+1,j+1,num);   
    }
}

int main(){

    cin>>n>>m>>k;
    printRow(1,1,n*m);
    vector<pair<int, int> >::iterator it = ans.begin();
    for(int i=1;i<k;i++){
        cout<<2<<" ";
        cout<<(*it).first<<" "<<(*it).second<<" ";
        it++;
        cout<<(*it).first<<" "<<(*it).second<<" ";
        it++;
        ENDL;
    }
    cout<<n*m-2*(k-1)<<" ";
    while(it!=ans.end()){
        cout<<(*it).first<<" "<<(*it).second<<" ";
        it++;
    }
    ENDL;
    return 0;
}


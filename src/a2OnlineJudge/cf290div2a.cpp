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

void drawHSnake(int m){
    for(int i=0;i<m;i++){
        cout<<"#";
    }
    cout<<endl;
}

void drawRSnake(int m){
    for(int i=0;i<m-1;i++){
        cout<<".";
    }
    cout<<"#"<<endl;
}

void drawLSnake(int m){
    cout<<"#";
    for(int i=1;i<m;i++){
        cout<<".";
    }
    cout<<endl;
}

int main(){
    
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=n;i++){
        if(i%2!=0){
            drawHSnake(m);
        }
        else if(i%2==0 && i%4!=0){
            drawRSnake(m);
        }
        else{
            drawLSnake(m);
        }
    }


    return 0;
}

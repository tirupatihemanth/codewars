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

    int d, sumTime;
    int minTime[30], maxTime[30];
    cin>>d>>sumTime;

    int i, j;
    for(i=0;i<d;i++){
        cin>>minTime[i]>>maxTime[i];
    }
    
    int sum1=0, sum2=0;

    for(i=0;i<d;i++){
        sum1+=minTime[i];
        sum2+=maxTime[i];
    }

    if(sumTime<sum1 || sumTime>sum2){
        cout<<"NO"<<endl;
        return 0;
    }

    sumTime-=sum1;
    for(i=0;i<d;i++){
        if(sumTime>maxTime[i]-minTime[i]){
            sumTime-=(maxTime[i]-minTime[i]);
            minTime[i] = maxTime[i];
        }
        else{
            minTime[i] +=sumTime;
            break;
        }
    }

    cout<<"YES"<<endl;

    for(i=0;i<d;i++){
        cout<<minTime[i]<<" ";
    }
    cout<<endl;
    return 0;
}

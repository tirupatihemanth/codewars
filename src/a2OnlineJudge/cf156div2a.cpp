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

    int n;

    int arr[21];

    cin>>n;

    int i, bp=0, ch=0, bk=0;
    
    for(i=1;i<=n;i++){
        cin>>arr[i];
    }

    for(i=1;i<=n;i++){
        switch(i%3){
            case 0:
                bk+=arr[i];
                break;

            case 1:
                ch+=arr[i];
                break;

            case 2:
                bp+=arr[i];
                break;
        }

    }

    if(bk>bp && bk>ch){
        cout<<"back"<<endl;
    }
    else if(bp>bk && bp>ch){
        cout<<"biceps"<<endl;
    }
    else if(ch>bp && ch>bk){
        cout<<"chest"<<endl;
    }

    return 0;
}

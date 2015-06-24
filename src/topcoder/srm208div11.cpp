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



class TallPeople{

public:
    vector <int> getPeople(vector<string>);
};

vector<int> TallPeople::getPeople(vector<string> people){
    stringstream strm;
    int i,var=1;
    for(i=0;i<people[0].size();i++){
        if(people[0][i]==' '){
            var++;
        }
    }
    
    int **arr = new int*[people.size()];

    for(i=0;i<people.size();i++){
        arr[i] = new int[var];
    }

    for(i=0;i<people.size();i++){
        strm<<people[i]<<" ";
    }
    
    for(i=0;i<people.size();i++){
        for(int j=0;j<var;j++){
            strm>>arr[i][j];
        }
    }


    int tos = INT_MIN, sot = INT_MAX, temp = INT_MAX;
    
    for(i=0;i<people.size();i++){
        for(int j=0;j<var;j++){
            if(arr[i][j]<temp){
                temp = arr[i][j];
            }
        }
        if(temp>tos){
            tos = temp;
        }
        temp = INT_MAX;
    }

    temp = INT_MIN;
    for(i=0;i<var;i++){
        for(int j=0;j<people.size();j++){
            if(arr[j][i]>temp){
                temp = arr[j][i];
            }   
        }

        if(temp<sot){
            sot = temp;
        }
        temp = INT_MIN;
    }
    
    vector<int> val;
    val.push_back(tos);
    val.push_back(sot);
    return val;
}

int main(){

    TallPeople obj;
    cout<<obj.getPeople({"9 2 3", "4 8 7"})[0]<<endl;
    return 0;
}

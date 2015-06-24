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


int dist[][2] = {{ 1,0 },{0,1}, {-1,0}, {0, -1}, {-1, -1}, {-1,1},{1, -1}, {1, 1}, {2,1}, {1,2}, {2, -1}, {-2,1}, {-2, -1}, {1, -2}, {-1, 2}, {-1, -2} };


int recurUp(int **arr, int steps){

    
}

int main(){

    int size, i, j, k, steps;
    ii start, end;
    cin>>size;
    cin>>start.first>>start.second>>end.first>>end.second>>steps;

    int **arr = new int*[size];

    for(i=0;i<size;i++){
        arr[i] = new int[size];
    }

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            arr[i][j] = 0;
        }
    }

      
    return 0;
}

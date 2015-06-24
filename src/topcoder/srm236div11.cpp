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

//********Not Finished**********
class BusinessTasks{
    public:
    string getTask(vector<string> , int);
};

int main(){
    vector<string> q = {"a", "b", "c", "d", "e"};
    BusinessTasks obj;
    cout<<obj.getTask(q,3);  
    return 0;
}

string BusinessTasks::getTask(vector<string> list, int n){

    int i,store = n, size=0;
    int count = list.size();
    
    int curSize;
    i=0;
    while(size!=count-1){
        curSize = list.size();
        list.erase(list.begin()+(i+n-1)%curSize);
        i = (i+n-1)%curSize;
        i = i%list.size();
        size++;
    }

    return list[0];
}

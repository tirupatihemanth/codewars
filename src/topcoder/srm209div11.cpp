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


class MedalTable {
public:
	vector <string> generate(vector <string>);
};


bool mySort(const pair<string, vector<int> > &var1, const pair<string, vector<int> > &var2){
    if(var1.second[0]>var2.second[0]){
        return true;
    }
    else if(var1.second[0]<var2.second[0]){
        return false;
    }
    else{
        if(var1.second[1]>var2.second[1]){
            return true;
        }
        else if(var1.second[1]<var2.second[1]){
            return false;
        }
        else{
            if(var1.second[2]>var2.second[2]){
                return true;
            }
            else if(var1.second[2]<var2.second[2]){
                return false;
            }
            else{
                if(var1.first.compare(var2.first)<0){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
    }
    return (var1.second)[0]>var2.second[0] || var1.second[1]>var2.second[1] || var1.second[2]>var2.second[2] || var1.first.compare(var2.first)<0 ;

}

vector <string> MedalTable::generate(vector <string> results) {

    map <string, vector<int> > var;

    vector<pair<string, vector<int> > >medals;
    
    vector<vector<string> > input;
    
    vector<string> temp;
    stringstream strm;
    
    int i, j;
    for(i=0;i<results.size();i++){
        strm<<results[i]<<" ";
    }
    
    string temp1;
    
    for(i=0;i<results.size();i++){
        for(j=0;j<3;j++){
            strm>>temp1;
            temp.push_back(temp1);
        }
        input.push_back(temp);
        temp.clear();
    }

    for(j=0;j<3;j++){
        for(i=0;i<results.size();i++){
            if(var.find(input[i][j])!=var.end()){
                var[input[i][j]][j]++;
            }
            else{
                switch(j){
                    case 0:
                    var[input[i][j]]= {1,0,0};
                    break;
                    case 1:
                    var[input[i][j]] = {0,1,0};
                    break;
                    case 2:
                    var[input[i][j]] = {0,0,1}; 
                };
            }
        }
    }

    copy(var.begin(), var.end(), back_inserter(medals));
    sort(medals.begin(), medals.end(), mySort); //sort function expects a functor some initialisations of ds needs a class but bot a functors in case of maps
    
    vector<string> ans;
    temp1 = "";
    for(i=0;i<medals.size();i++){
        temp1+=medals[i].first;
        for(j=0;j<3;j++){
            temp1+=" ";
            temp1+=to_string((medals[i].second)[j]);
        }
        ans.push_back(temp1);
        temp1 = "";
    }
    
    return ans;
}

int main(){
    
    MedalTable obj;
    vector<string> var = obj.generate({"GER AUT SUI", "AUT SUI GER", "SUI GER AUT"});
    int i;
    for(i=0;i<var.size();i++){
        cout<<var[i]<<endl;
    }
    return 0;
}

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

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

map<string,int> var;
bool mySort(pair<string,int> &var1, pair<string,int> &var2){
	if(var1.second>var2.second){
		return true;
	}	
	else if(var1.second==var2.second){
		if(var1.first.compare(var2.first)){
			return true;
		}
		else{
			return false;
		}
	}
	else{
		return false;
	}
}

int main()
{
	int n;
	cin>>n;
	string str;
	for(int i=0;i<n;i++){
		cin>>str;
		var[str]++;
	}
	
	vector<pair<string,int> > arr(var.begin(), var.end());
	
	sort(arr.begin(), arr.end(),mySort);
	for(int i=0;i<arr.size();i++){
		
		cout<<arr[i].first<<" "<<arr[i].second<<endl;
	}
     return 0;
}

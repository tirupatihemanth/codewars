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

    int s1, s2, s3;
    cin>>s1>>s2>>s3;

    int a, b, c;

    a = sqrt(s1*s3/s2);
    
    b =sqrt(s1*s2/s3);

    c = sqrt(s2*s3/s1);

    cout<<4*(a+b+c)<<endl;
    return 0;
}

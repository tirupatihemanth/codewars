#include <iostream>
#include <string>
#include <vector>
#include <bitset>
#include <algorithm>

using namespace std;

int main(){
    string str;
    vector<int> var1;
    var1.push_back(1);
    var1.push_back(2);
    var1.push_back(2);
    var1.push_back(3);
    //unique(var1.begin(), var1.end());
    var1.erase(unique(var1.begin(), var1.end()), var1.end());
    cout<<var1[0]<<var1[1]<<var1[2]<<endl;
    bitset<100> var;
    var.reset();
    cout << "Hello World";
    cin >> var;
    cout <<endl;
    cin>>var;
    return 0;
}

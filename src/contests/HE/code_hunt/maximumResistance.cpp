#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main(){
    
    int T, i, j, val1, val2;
    string label;
    vector<int> values;    
    stack<int> valStack;
    string:: reverse_iterator temp;
    cin>>T;
    
    while(T--){
        cin>>label;
        for(char var:label){
            if(var == 'X'){
                cin>>j;
                values.push_back(j);
            }
        }
        temp = NULL;

        for(string::reverse_iterator it = label.rbegin();it!=label.rend();it++){
                    
        }

        sort(values.begin(), values.end(), greater<int>());
        i = values.size()-1;
        for(string::reverse_iterator it = label.rbegin();it!=label.rend();it++){
            if(*it == 'X'){
                valStack.push(values[i--]);
            }
            else{

                val1 = valStack.top();
                valStack.pop();
                val2 = valStack.top();
                valStack.pop();
                if(*it == 'B'){
                    valStack.push(max(val1, val2));
                }
                else{
                    valStack.push(val1+val2);
                }
            }
        }
        cout<<valStack.top()<<endl;
        valStack.pop();
        values.resize(0);
    }
}

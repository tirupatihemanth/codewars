#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){

    int T;
    cin >> T;
    string exp;
    string post_exp;
    stack<char> op_stack;

    while(T--){
        cin >> exp;
        post_exp = "";
        for(char &c : exp){
            if(c == '+' || c == '*' || c == '-' || c == '/' || c == '^'){
                op_stack.push(c);
            }
            else if(c == ')'){
                post_exp+=op_stack.top();
                op_stack.pop();
            }
            else if(c == '('){
                continue;
            }
            else{
                post_exp+=c;
            }
        }
        cout<<post_exp<<endl;
    }
}

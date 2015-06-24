#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string add(string &s1, string &s2){  
    string add_ans;
    if(s1.size() < s2.size()){
       add_ans = s1;
       s1 = s2;
       s2 = add_ans;
       add_ans = "";
    }
    int i=0;
    short temp=0;
    for(i= 0;i< s2.size();i++){
        temp+= s2.at(i) + s1.at(i) - 2*'0';
        if(temp>10){
            add_ans+= (temp%10) +'0';
            temp = temp/10;
        }
        else{
            add_ans+=temp+'0';
            temp=0;
        }
    }
    while(i<s1.size()){
        temp+= s1.at(i)-'0';
        if(temp>10){
            add_ans+= (temp%10) +'0'; 
            temp = temp/10;
        }
        else{
            add_ans+= temp+'0';   
            temp=0;
        }
        i++;
    }
    if(temp!=0){
        add_ans+= temp+'0';
    }
    return add_ans;

}
string multiply(string &s1, string &s2){
    string ans("0");
    string t_s;
    int size2 = s2.size();
    int size1 = s1.size();
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    short temp;
    int j;
    for(int i=0;i<size2;i++){
        j = 0;
        temp=0;
        t_s.insert(0, i ,'0');
        while(j<size1){
            temp += (s2.at(i)-'0') * (s1.at(j)-'0');
            if(temp<10){
                t_s+=temp+'0';
                temp = 0;
            }
            else{
                t_s+=(temp%10)+'0';
                temp = temp/10;
            }

            j++;
        }
        if(temp!=0){
            t_s+=temp+'0'; 
        }
        ans = add(ans, t_s);
        t_s="";
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    int T, num;
    cin >> T;
    string num_str;
    string t_s;
    while(T--){
        cin >> num;
        num_str = to_string(num);
        for(int i=num-1;i>=2;i--){
            t_s = to_string(i);
            num_str = multiply(num_str, t_s);
        }
        cout << num_str << endl;
    }
    return 0;
}

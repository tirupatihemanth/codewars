#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string add(string &str1, string &str2){
    string add_ans;
    if(str1.size() < str2.size()){
       add_ans = str1;
       str1 = str2;
       str2 = add_ans;
       add_ans = "";
    }
    int i=0;
    short temp=0;
    for(i= 0;i< str2.size();i++){
        temp+= str2.at(i) + str1.at(i) - 2*'0';
        if(temp>10){
            add_ans.insert(0, 1, (temp%10) + '0');
            temp = temp/10;
        }
        else{
            add_ans.insert(0, 1 , temp + '0');
            temp=0;
        }
    }

    while(i<str1.size()){
        temp+= str1.at(i)-'0';
        if(temp>10){
            add_ans.insert(0, 1, (temp%10) + '0');
            temp = temp/10;
        }
        else{
            add_ans.insert(0, 1, str1.at(i));
            temp=0;
        }
        i++;
    }

    if(temp!=0){
        add_ans.insert(0, 1, temp+'0');
    }
    return add_ans;

}


string multiply(string &str1, string &str2){
 
    string ans("0");
    string temp_str;
    int size2 = str2.size();
    int size1 = str1.size();
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    short temp;
    int j;
    for(int i=0;i<size2;i++){
        j = 0;
        temp=0;
        temp_str.insert(0, i ,'0');
        while(j<size1){
            temp += (str2.at(i)-'0') * (str1.at(j)-'0');
            if(temp<10){
                temp_str+=temp+'0';
                //temp_str.insert(0, 1, temp+'0');
                temp = 0;
            }
            else{
                temp_str+=(temp%10)+'0';
                //temp_str.insert(0,1, (temp%10)+'0');
                temp = temp/10;
            }

            j++;
        }
        if(temp!=0){
            temp_str+=temp+'0'; 
            //temp_str.insert(0, 1, temp+'0');
        }
        ans = add(ans, temp_str);
        temp_str="";
    }

    return ans;
}


int main(){

    int T, num;
    cin >> T;
    string num_str;
    string temp_str;
    while(T--){
        cin >> num;
        num_str = to_string(num);
        for(int i=num-1;i>=2;i--){
            temp_str = to_string(i);
            //cout<<"num_str: "<<num_str<<" temp_str: "<<temp_str<<endl;
            num_str = multiply(num_str, temp_str);
            //cout<<"num_str: "<<num_str<<endl;
        }

        cout << num_str << endl;
    }

    return 0;

}

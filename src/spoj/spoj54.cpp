#include <iostream>
#include <string>
#include <algorithm>
#define all(c) c.begin(), c.end()
using namespace std;

        
        
string add(string &str1, string &str2){

    string s1 = str1, s2 = str2;
    reverse(all(s1));
    reverse(all(s2));
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
        if(temp>=10){
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
        if(temp>=10){
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
    reverse(all(add_ans));
    reverse(all(s1));
    return add_ans;

}

// This function for calulating difference of bigIntegers assume that str1 > str2 which in this case is always true
string substract(string &str1, string &str2){
        
        reverse(str1.begin(), str1.end());
        reverse(str2.begin(), str2.end());
        string ans;
        int i,temp, carry=0;
        for(i=0;i<str2.size();i++){
            if(str1.at(i) >= (str2.at(i)+carry)){
                ans+='0'+(str1.at(i)-str2.at(i)-carry);
                carry = 0;
            }
            else{
                temp = str1.at(i)-'0'+10;
                ans+= '0'+temp - (str2.at(i) - '0')-carry;
                carry = 1;
            }
        }

        while(i<str1.size()){
            if(str1.at(i)>=carry+'0'){
                ans+=str1.at(i)-carry;
                carry = 0;
            }    
            else{
                temp = str1.at(i)-'0'+10;
                ans+=temp - carry+'0';
                carry = 1;
            }
            i++;
        }
        i=ans.size()-1;
        carry=0;
        while(ans.at(i)=='0' && i>0){
            carry++;
            i--;
        }
        ans.erase(ans.size()-carry, carry);
        reverse(ans.begin(), ans.end());
        reverse(all(str2));
        return ans;
}

//function to divide big integers by 2
string divideBy2(string &str){
    
    string ans;
    int i, carry=0;

    for(i=0;i<str.size();i++){
        if((carry*10+str.at(i)-'0')%2 == 0){
            ans+= '0'+(carry*10 + str.at(i)-'0')/2;
            carry=0;
        }
        else{
            ans+= '0' + (carry*10+str.at(i)-'0')/2;
            carry = 1;
        }
    }
    
    i=0;
    carry=0;
    while(i<ans.size()-1 && ans.at(i) =='0'){
        carry++;
        i++;
    }
    ans.erase(0, carry);
    return ans;
}

int main(){

    int T=10;
    string totalStr, leadStr;
    string ans;
    while(T--){
        cin >> totalStr >> leadStr;
        //cout<<totalStr+" "+leadStr<<endl;
        ans = substract(totalStr, leadStr);
        //cout<<"ans: "+ans<<endl;
        ans = divideBy2(ans);
        cout<<add(ans, leadStr)<<"\n"<<ans<<"\n";
    }
    return 0;
}


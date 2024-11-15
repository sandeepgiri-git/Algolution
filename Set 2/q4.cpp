#include<iostream>
using namespace std;

bool palindrome(string s,int n){
    int j = n-1;
    for(int i=0;i<n/2;i++){
        if(s[i] != s[j]){
            return false;
        }
        j--;
    }
    return true;
}

bool convertSmall(string s,int n){
    string s2 = "";
    
    for(int i=0;i<n;i++){
        if(int(s[i]) >= 97 && int(s[i]) <= 122){
            s2 += s[i];
        }
        else if(int(s[i]) >= 65 && int(s[i]) <= 90){
            s2 += char(int(s[i]) + 32);
        }
    }

    return palindrome(s2,s2.length());
}

int main(){
    string s = "A man, a plan, a canal: Panama";
    int n = s.length();
    if (convertSmall(s,n)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
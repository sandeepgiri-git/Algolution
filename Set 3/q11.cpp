#include<iostream>
using namespace std;

// Optimal approach
bool anagramicPalindrome(string s,int n){
    int hash[26] = {0};
    for(int i=0;i<n;i++){
        hash[int(s[i]) - 97] += 1;
    }

    int flag = 0;
    for(int i=0;i<26;i++){
        if(hash[i]%2 == 1){
            flag++;
        }
        if(flag > 1){
            return false;
        }
    }
    return true;
}

int main(){
    string s = "aaaaaaxbb";
    int n = s.length();

    if(anagramicPalindrome(s,n)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
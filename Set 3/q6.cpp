#include<iostream>
using namespace std;

void print(char a[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}


// Native approach 
bool palindrome(char s[],int st,int e){
    int j = e;
    for(int i=st;i<(st+e)/2;i++){
        if(s[i] != s[j]){
            return false;
        }
        j--;
    }
    return true;
}

bool cyclicRotationNative(string s,int n){
    char a[n-1 + n] = {'0'};
    int st = n-1;
    int e = n + n-2;
    int x = 0;
    for(int i=n-1;i<n + n-1;i++){
        a[i] = s[x];
        x++;
    }

    for(int i=0;i<n-1;i++){
        print(a,st,e);
        if (palindrome(a,st,e)){
            return true;
        }
        st--;
        a[st] = a[e];
        e--;
    }
    return false;
}

// Optimal approach
bool cyclicRotationOptimal(string s,int n){
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

    if(cyclicRotationNative(s,n)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
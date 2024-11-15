#include<iostream>
using namespace std;

void print(char a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}

bool validParanthesis(string s,int n){
    char stack[n];
    int top = -1;

    for(int i=0;i<n;i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '[' ){
            top++;
            stack[top] = s[i];
        }
        else if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
            if(top == -1){
                return false;
            }
            else if(s[i] == ')' && stack[top] == '('){
                top --;
            }
            else if(s[i] == '}' && stack[top] == '{'){
                top --;
            }
            else if(s[i] == ']' && stack[top] == '['){
                top --;
            }
            else{
                return false;
            }
        }
    }
    if (top == -1){
        return true;
    }
    return false;
}

int main(){
    string s = "(){()}[]";
    int n = s.length();

    if (validParanthesis(s,n)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
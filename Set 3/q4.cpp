#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}

bool validSmallParanthesis(string s,int n){
    char stack[n];
    int top = -1;

    for(int i=0;i<n;i++){
        if(s[i] == '(' ){
            top++;
            stack[top] = s[i];
        }
        else if(s[i] == ')'){
            if(top == -1){
                return false;
            }
            top--;
        }
    }
    if (top == -1){
        return true;
    }
    return false;
}

int main(){
    string s = "()()";
    int n = s.length();

    if (validSmallParanthesis(s,n)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
#include<iostream>
using namespace std;

bool checkPerfectSquare(int n){
    for(int i = 0;i<n/2;i++){
        if(i*i == n){
            return false;
        }
    }
    return true;
}

int main(){
    int a = 20;
    int c = 0;
    for(int i=2;i<a/2;i++){
        if(a%i == 0 && checkPerfectSquare(a)){
            c += 1;
        }
    }
    cout<<c;
}
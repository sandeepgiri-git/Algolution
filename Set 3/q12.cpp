#include<iostream>
using namespace std;

bool happyNumber(int n,int prev,int count){
    int sum = 0;
    while(n > 0){
        sum += (n%10) * (n%10);
        n = n/10;
    }
    // cout<<count<<endl;
    if (sum == 1){
        return true;
    }
    else if(sum == prev || count > 1000){
        return false;
    }
    return happyNumber(sum,sum,++count);
}

int main(){
    int a = 91;
    happyNumber(a,a,0) ? cout<<"True" : cout<<"False";
}
#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}

void pyramid(int row){
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int r = 5;
    pyramid(r);
}
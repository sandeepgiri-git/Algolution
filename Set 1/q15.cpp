#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}

void zeroOne(int row,int col){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            if(i == 0 || i == col-1 || j == 0 || j == row-1){
                cout<<1;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }
}

int main(){
    int r = 8;
    int c = 5;
    zeroOne(r,c);
}
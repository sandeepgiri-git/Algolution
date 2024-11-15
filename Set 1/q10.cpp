#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}

void parallelogram(int row,int col){
    int x = col-1;
    for(int i=0;i<col;i++){
        for(int j=0;j<row+col-1;j++){
            if(j >= x && j < row+x){
                cout<<"*"<<" ";
            }
            else{
                cout<<" ";
            }
        }
        x--;
        cout<<endl;
    }
}

int main(){
    int r = 10;
    int c = 10;

    parallelogram(r,c);
}
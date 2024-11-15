#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}

void numberRev(int row,int col){
    for(int i=0;i<col;i++){
        int x = row;
        if(i%2 == 0){
            for(int j=1;j<=row;j++){
                cout<<j;
            }
        }
        else if(i%2 == 1){
            for(int j=x;j>0;j--){
                cout<<j;
            }
        }
        cout<<endl;
    }
}

int main(){
    int r = 8;
    int c = 5;
    numberRev(r,c);
}
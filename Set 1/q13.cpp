#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}

void diamond(int row){
    if(row%2 == 0){
        cout<<"Row can always be odd...!";
        return;
    }
    for(int i=0;i<row/2+1;i++){
        for(int j=0;j<row;j++){
            if(j>=row/2 - i && j<=row/2 + i ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=row/2-1;i>=0;i--){
        for(int j=0;j<row;j++){
            if(j>=row/2 - i && j<=row/2 + i ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int r = 11;
    diamond(r);
}
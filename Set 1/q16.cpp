#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}

void maxRow(int row,int col){
    for(int i=0;i<col;i++){
        for(int j=i;j<row+i;j++){
            if(j >= row){
                cout<<row<<" ";
            }else{
                cout<<j+1<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int r = 8;
    int c = 8;
    maxRow(r,c);
}
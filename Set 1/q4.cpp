#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}

int reverse(){
    int temp;
    int a[7] = {0};
    int x = 6;
    for(int i=0;i<7;i++){
        cout<<"Enter the values: ";
        cin>>temp;
        a[x] = temp;
        x--;
    }
    print(a,7);
}

int main(){
    cout<<reverse();
}
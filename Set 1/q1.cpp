#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}

int countNegative(int a[],int n){
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            c += 1;
        }
    }
    return c;
}

int main(){
    int a[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(a)/sizeof(int);

    cout<<countNegative(a,n);
}
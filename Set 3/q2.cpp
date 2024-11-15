#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}

int countOR(int a[],int n){
    int c=0;
    for(int i=0;i<n;i++){
        c = c | a[i];
    }
    return c;
}

int main(){
    int a[] = {1, 4, 6};
    int n = sizeof(a)/sizeof(int);

    cout<<countOR(a,n);
}
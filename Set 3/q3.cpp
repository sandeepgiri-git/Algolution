#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}

int max(int a[],int s,int e){
    int max=0;
    for(int i=s;i<=e;i++){
        if(a[i] > a[max]){
            max = a[i];
        }
    }
    return a[max];
}

int main(){
    int a[] = {1,2,3,1,4,5};
    int n = sizeof(a)/sizeof(int);
    int k  =3;

    int p = 0;
    int q = k-1;

    while(q < n){
        cout<<max(a,p,q)<<" ";
        p++;
        q++;
    }
}
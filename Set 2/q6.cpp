#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}

void findPair(int a[],int n,int x){
    int p= 0;
    int q = n-1;

    while(p < q){
        int sum = a[p] + a[q];
        if(sum == x){
            cout<<a[p]<<" "<<a[q];
            cout<<endl;
            return;
        }
        else if(sum > x){
            q--;
        }else{
            p++;
        }
    }
    cout<<"NO Pair";
}

int main(){
    int a[] = {1,2,4,5,7,11};
    int n = sizeof(a)/sizeof(int);
    int x = 9;
    findPair(a,n,x);
}
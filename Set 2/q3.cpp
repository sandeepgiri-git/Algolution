#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}

int kthLargest(int a[],int n,int k){
    if (k > n){
        return -1;
    }
    int temp;
    for(int i=0;i<k;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    return a[n-k];
}

int main(){
    int a[] = {3,2,1,5,6,4};
    int n = sizeof(a)/sizeof(int);
    int k = 2;
    cout<<kthLargest(a,n,k);
}
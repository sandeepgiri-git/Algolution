#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}

int firstOcc(int a[],int n,int val){
    for(int i=0;i<n;i++){
        if(a[i] == val){
            return i;
        }
    }
    return -1;
}

int main(){
    int a[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(a)/sizeof(int);
    print(a,n);
    int val;

    cout<<"Enter the number to find in array -";
    cin>>val;
    cout<<firstOcc(a,n,val);
}
#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}

int equilibriumPoint(int a[],int n){
    int ans = -1;
    int sum1 = a[0];
    int sum2 = 0;
    for(int i=2;i<n;i++){
        sum2 += a[i];
    }
    int x = 1;

    while(x < n-1){
        // cout<<sum1<<" "<<sum2<<" "<<endl;
        if (sum1 == sum2){
            return x+1;
        }
        sum1 += a[x];
        x++;
        sum2 -= a[x];
    }


    return -1;
}

int main(){
    int a[] = {-7,1,5,2,-4,3,0};
    int n = sizeof(a)/sizeof(int);

    cout<<equilibriumPoint(a,n);
}
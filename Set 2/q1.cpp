#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}

int maxSum(int a[],int n){
    int sum = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        sum += a[i];
        if(ans < sum){
            ans = sum;
        }
        if(sum <= 0){
            sum = 0;
        }
    }
    return ans;
}

int main(){
    int a[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(a)/sizeof(int);

    cout<<maxSum(a,n);
}
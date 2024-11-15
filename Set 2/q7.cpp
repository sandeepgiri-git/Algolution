#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}

int maxKthSum(int a[],int n,int k){
    int sum = 0;
    int ans = 0;
    for(int i=0;i<k;i++){
        sum += a[i];
    }
    int x = 0;
    int y = k-1;
    while(y < n){
        if(ans < sum){
            ans = sum;
        }
        y++;
        sum += a[y];
        sum -= a[x];
        x++;
    }
    return ans;
}

int main(){
    int a[] = {100,200,300,400};
    int n = sizeof(a)/sizeof(int);
    int k = 2;
    cout<<maxKthSum(a,n,k);
}
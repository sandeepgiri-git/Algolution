#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}

int buySell(int a[],int n){
    int buy = 0;
    int sell = 1;
    int ans = 0;

    while(sell < n){
        int profit = a[sell] - a[buy];
        if(profit > ans){
            ans = profit;
        } 
        if(a[buy] > a[sell]){
            buy = sell;
        }
        sell ++;
    }

    return ans;
}

int main(){
    int a[] = {7,1,5,3,6,4};
    int n = sizeof(a)/sizeof(int);
    cout<<buySell(a,n);
}
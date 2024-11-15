#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}

void freqNum(int a[],int n){
    int max = a[0];
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max){
            max = a[i];
        }
        if (a[i] < min){
            min = a[i];
        }
    }
    // cout<<max<<min;
    int hash[max+1] = {0};
    int hash2[(-1*min)+1] = {0};

    for (int i = 0; i < n; i++)
    {
        /* code */
        if(a[i] >= 0){
            hash[a[i]] += 1;
        }else{
            hash2[-1 * a[i]] += 1;
        }
    }

    for(int i=0;i<sizeof(hash)/sizeof(int);i++){
        if(hash[i] > 0){
            cout<<"The frequency of "<<i<<" is = "<<hash[i]<<endl;
        }
    }
    for(int i=0;i<sizeof(hash2)/sizeof(int);i++){
        if(hash2[i] > 0){
            cout<<"The frequency of "<<-1*i<<" is = "<<hash2[i]<<endl;
        }
    }
}

int main(){
    int a[] = {-2,1,-3,4,-1,2,1,-5,4,11,9};
    int n = sizeof(a)/sizeof(int);

    freqNum(a,n);
}
#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}

int inversion(int a[],int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] > a[j]){
                ans++;
            }
        }
    }
    return ans;

}

int main(){
    int a[] = {7,2,6,3};
    int n = sizeof(a)/sizeof(int);

    cout<<inversion(a,n);
}
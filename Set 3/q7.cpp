#include <iostream>
using namespace std;

int noName(int a[],int dict[],int n){
    int d = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        d += dict[a[i]];
    }
    // cout<<d<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] + a[j] == d){
                ans ++;
            }
        }
    }
    return ans;
}

int main(){
    int dict[] = {2,2,1,2,2,2,1,2,2,2};
    string d[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int a[] = {7,4,2};
    int n = sizeof(a)/sizeof(int);

    cout<<d[noName(a,dict,n)];
}
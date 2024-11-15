#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}

int max(){
    int temp;
    cout<<"Enter the values: ";
    cin>>temp;
    int ans = temp;
    for(int i=0;i<4;i++){
        cout<<"Enter the values: ";
        cin>>temp;
        if (ans < temp){
            ans = temp;
        }
    }
    return ans;
}

int main(){
    cout<<max();
}
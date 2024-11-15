#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}

bool palindrome(int s[],int n){
    int j = n-1;
    for(int i=0;i<n/2;i++){
        if(s[i] != s[j]){
            return false;
        }
        j--;
    }
    return true;
}

int main(){
    int temp;
    int a[5] = {0};
    for(int i=0;i<5;i++){
        cout<<"Enter the values: ";
        cin>>temp;
        a[i] = temp;
    }
    if(palindrome(a,5)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
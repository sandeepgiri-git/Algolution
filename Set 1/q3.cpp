#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<"  ";
    }
    cout<<endl;
}

int *merge(int a[],int b[],int n,int n2){
    
    int c[n+n2] = {0};
    // cout<<n<<n2;
    int p=0;
    int q=0;
    int k=0;

    while(p < n && q < n2){
        if(a[p] >= b[q]){
            c[k] = b[q];
            q++;
        }
        else{
            c[k] = a[p];
            p++;
        }

        k++;
    }

    while(p < n){
        c[k] = a[p];
        p++;
        k++;
    }
    while(q < n){
        c[k] = b[q];
        q++;
        k++;
    }
    print(c,n+n2);
    return c;

}

int main(){
    int a[] = {2,4,6,8,10,12};
    int b[] = {1,3,5,7,9,11};
    int n = sizeof(a)/sizeof(int);
    int n2 = sizeof(b)/sizeof(int);
    
    merge(a,b,n,n2);
}
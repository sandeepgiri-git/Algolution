#include<iostream>
using namespace std;

void print(int a[],int size){
    for(int i=0;i<=size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int deletionHeap(int heap[],int size){
    int idx = 0;
    int ans = heap[idx];
    heap[idx] = heap[size];
    size --;

    int l = 2*idx + 1;
    int r = 2*idx + 2;

    while(l <= size){
        // cout<<l<<" "<<r<<" "<<size<<endl;
        if(r <= size){
            int min;
            heap[l] <= heap[r] ? min = l : min = r;
            if(heap[min] < heap[idx]){
                int temp = heap[min];
                heap[min] = heap[idx];
                heap[idx] = temp;

                idx = min;
            } 
        }
        else{
            if(heap[l] <= heap[idx]){
                int temp = heap[l];
                heap[l] = heap[idx];
                heap[idx] = temp;

                idx = l;
            } 
        }
        l = 2*idx + 1;
        r = 2*idx + 2;
    }
    return ans;

}

void insertionHeap(int heap[], int val, int idx){
    heap[idx] = val;
    int temp;
    while(idx != 0 && heap[(idx-1)/2] > val){
        temp = heap[idx];
        heap[idx] = heap[(idx-1)/2];
        heap[(idx-1)/2] = temp;

        idx = (idx-1)/2;
    }
}

int main(){
    int a[] = {11,8,5,7,5,1001,3,4,6,3,7,4,3,42,5,3,5,3,53,5};
    int n = sizeof(a)/sizeof(int);
    int k = 2;

    int heap[n];
    int size = -1;

    for(int i=0;i<n;i++){
        // cout<<"Value is: "<<a[i]<<endl;
        insertionHeap(heap, a[i], i);
        size++;
    }
    print(heap,size);

    int minProduct = 1; 
    for(int i=0;i<k;i++){
        minProduct *= deletionHeap(heap,size);
        size--;
    }
    print(heap,size);
    cout<<"The minimum product of "<<k<<" element is: "<<minProduct;

    return 0;
}
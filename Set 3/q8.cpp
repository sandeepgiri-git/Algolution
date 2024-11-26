// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int countRecursion(vector<int> coins,int n,int sum){
    if(sum == 0){
        return 1;
    }
    if(sum < 0 || n == 0){
        return 0;
    }
    
    return countRecursion(coins,n,sum - coins[n-1]) + countRecursion(coins,n-1,sum);
}

int main() {
    vector<int> coins = {1,2,3};
    int sum = 4;
    cout<<countRecursion(coins,coins.size(),sum);
}

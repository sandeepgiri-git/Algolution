#include <iostream>
using namespace std;

int main(){
    int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int row = sizeof(a[0])/sizeof(int);
    int col = sizeof(a)/sizeof(a[0]);

    int r = 0;
    int c = 0;
    int r2 = row-1;
    int c2 = col-1;

    int totalElement = row*col;
    int count = 0;

    while(count < totalElement){
        for (int i = r;count < totalElement && i <= r2; i++)
        {count < totalElement &&
            cout<<a[r][i]<<" ";
            count++;
        }
        r++;

        for (int i = r;count < totalElement && i <= c2; i++)
        {
            cout<<a[i][r2]<<" ";
            count++;
        }
        r2--;

        for (int i = r2;count < totalElement && i >= c; i--)
        {
            cout<<a[c2][i]<<" ";
            count++;
        }
        c2--;

        for (int i = c2; count < totalElement && i >= r; i--)
        {
            cout<<a[i][c]<<" ";
            count++;
        }
        c++;
    }
}
#include<iostream>
using namespace std;
// print the max value in an array, using recurrsion
int f(int *arr,int idx, int n){
    // base case
    if(idx == n-1){
        // we only have on element left so it is the maximum
        return arr[idx];
    }
    // self work
    return max(arr[idx], f(arr, idx+1, n));
}

int main(){
    int n=5;
    int arr[]={4,7,2,8,5};
    cout<<f(arr, 0, n);

    return 0;
}
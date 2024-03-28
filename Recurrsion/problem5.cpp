#include<iostream>
using namespace std;
// Find the sum of the values of a given array, using recurrsion
int f(int *arr, int idx, int n){
    // base case
    if(idx == n-1){
        return arr[idx];
    }
    // self work
    return (arr[idx] + f(arr, idx+1, n));
}
int main(){
    int n =10;
    int arr[]={6,7,8,9,1,2,3,4,8,9};
    cout<<f(arr, 0, n);
    return 0;
}
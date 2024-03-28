#include<iostream>
using namespace std;
// print element of an array, using recurssion

void f(int *arr, int idx, int n){
    //base case
    if(idx == n) return;
    // self work
    cout<<arr[idx]<<"\n";
    // assumption
    f(arr, idx+1, n);  // assume it works correctly-> it prints remaining array
}
int main(){
    int n = 5;
    int arr[]={4,5,6,7,8};
    f(arr, 0, n);

    return 0;
}
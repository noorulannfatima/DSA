#include<iostream>
using namespace std;
/*Rotate a given array'a' by k steps, where k is non negative.
Note: k can be greater than n as well where n is the size if array 'a'. */

int main(){
    int array[]={1,2,3,4,5};
    int n=5;
    int k=2;
    // k can greater than n
    k=k%n;
    
    int ansarray[5];
    int j=0;
    // For inserting last k elements in ans array
    for(int i=n-k; i<n; i++){
            ansarray[j++]=array[i];
        }
    // For inseriting n-k elements in ans array
    // 1 2 3
    // 4 5 (n-k)
    for(int i=0;i<=k;i++){
        ansarray[j++]=array[i];
    }
    for(int i=0;i<n;i++){
        cout<<ansarray[i]<<" ";
    }
    
    return 0;
}
#include<iostream>
using namespace std;
// calulate the sum of elements in a given array.

int main(){
    int array[]={2, 34, 4, 67, 3, 67, 8};
    int size=sizeof(array)/sizeof(array[0]);

    int sum =0;
    for (int i=0; i<size;i++){
        sum += array[i];
    }
    cout<<sum;
    return 0;
}

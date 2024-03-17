#include<iostream>
using namespace std;
// Find the max value out of all the elements in the array.

int main(){
    int array[]={23, 45, 76, 98, 34, 90, 15};
    int size=sizeof(array)/sizeof(array[0]);
    int max=array[0];
    for(int i=0;i<size;i++){
        if(max<array[i]){
            max=array[i];
        }
    }
    cout<< max;
    return 0;
}
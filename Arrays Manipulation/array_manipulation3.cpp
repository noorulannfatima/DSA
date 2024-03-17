#include<iostream>
using namespace std;
// Find the second largest in the given array.
int largestElementIndex(int array[], int size){
    int max=INT8_MIN;
    int maxindex=-1;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
            maxindex=i;
        }
    }
    return maxindex;
}
int main(){
    int array[] ={2,3,5,7,6,1};
    int size =sizeof(array)/sizeof(array[0]);
    int indexOfLargest =largestElementIndex(array, size);
    cout<<"largest Element : "<<array[indexOfLargest]<<endl;
    array[indexOfLargest]=-1;
    int indexOfSecondLargest=largestElementIndex(array, size);
    cout<<"Second Largest Element : "<<array[indexOfSecondLargest]<<endl;


    return 0;
}

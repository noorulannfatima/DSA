#include<iostream>
#include<vector>
using namespace std;
// Find the differences between the sum of element at even indices to the sum of elements at odd indices.
int main(){
    int array[]={2,4,7,3,8,3,8,2};
    int size=sizeof(array)/sizeof(array[0]);

    int sum=0;
    for(int i=0; i<size; i++){
        if(i%2==0){
        sum+=array[i];
        }else{
            sum-=array[i];
        }
    }
    cout<<"Sum : "<<sum<<endl;
    return 0;
}
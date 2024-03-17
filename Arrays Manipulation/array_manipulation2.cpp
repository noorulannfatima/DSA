#include<iostream>
using namespace std;
//! Finding a unique number in a given array.
// Find the unique number in the given array where all elements being repeated twice with value being unique.
int main(){
    int array[]={2,3,1,3,2,4,1};
    int size=7;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]==array[j]){
                array[i]=array[j]=-1;
            }
        }
    }
    for(int i=0;i<size;i++){
        if(array[i]>0){
            cout<<"Unique : "<<array[i]<<endl;
        }
    }
    return 0;
}
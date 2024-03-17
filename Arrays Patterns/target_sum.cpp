#include<iostream>
using namespace std;
// Find the total number of pairs in the array whose sum is equal to the given value x.

int main(){
    int array[]={3,4,7,1,6};
    int size=5;
    int target=7;
    int pairs=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]+array[j]==target){
                pairs++;
            }
        }
    }
    cout<<"Pairs : "<<pairs<<endl;
return 0;
}
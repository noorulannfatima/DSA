#include<iostream>
using namespace std;
/*Search if given element is present in the array or not.
If it is not present then return -1 else return the index.*/

int main(){
    int array[]={23, 45, 11, 67, 34};
    int size=sizeof(array)/sizeof(array[0]);
    int key = 67; // elemnet we are looking for

    int search= -1;
    for (int i=0;i<size;i++){  // linera search
        if(array[i]==key){
            search=array[i];
            break; // stop iteration where we find our elementS
        }
    }
    cout<<search<<endl;
    return 0;
}
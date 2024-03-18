#include<iostream>
using namespace std;
// 2d arrays -> n=rows, m=columns -> n*m = total no of elements.
int main(){
    int n ,m;
    cout<<"Enter value of n : "<<endl;
    cin>>n;
    cout<<"Enter the value on m : "<<endl;
    cin>>m;

    int array[n][m];
    cout<<"Enter elements of 2d array : "<<endl;
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>array[i][j];
        }
    }
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<array[i][j]<<" ";   
        }cout<<endl;
    }
    return 0;
}

/* 2D arrays importance
-> Representing grids
-> faster access
-> predefined size
*/
#include<iostream>
using namespace std; 
// Write a program to display the transpose of the matrix enter by the user.
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

    int transpose[m][n];
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            transpose[i][j]=array[j][i];
        }
    }
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<array[i][j]<<" ";   
        }cout<<endl;
    }
    return 0;
}


//!  having problem here
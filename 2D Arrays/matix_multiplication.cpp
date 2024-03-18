#include<iostream>
using namespace std;
//Write a program to display the multiplication of two matrices enter by the user.
/*
r1*c1
r2*c2
-> c1 and r2 must be equal
-> answer matrix will be of r1*c2 dimention
*/
int main(){
    int r1;
    cout<<"Enter the no of r1 : "<<endl;
    cin>>r1;
    int c1;
    cout<<"Enter the no of c1 : "<<endl;
    cin>>c1;

    int A[r1][c1];
    cout<<"Enter elements of first 2D Array : "<<endl;
    for (int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }
    int r2;
    cout<<"Enter the no of r2 : "<<endl;
    cin>>r2;
    int c2;
    cout<<"Enter the no of c2 : "<<endl;
    cin>>c2;

    int B[r2][c2];
    cout<<"Enter elements of second 2D Array : "<<endl;
    for (int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>B[i][j];
        }
    }
    if(c1!=r2){
        cout<<"Multiplication not possible"<<endl;
    }

    int C[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int values=0;
            for (int k=0;k<r2;k++){
                values+=A[i][k]*B[k][j];
            }
            C[i][j]=values;
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
        cout<<C[i][j]<<" ";
        }cout<<endl;
    }


    return 0;
}
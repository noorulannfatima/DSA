#include<iostream>
#include<vector>
using namespace std;
/*  Given a matrix 'a' of dimension n x m and 2 coordinates (l1,r1) ans (l2, r2). Return
the sum of the rectangle from (l1, r1) and (l2, r2).
---Approach 1---
Methode: Brute force
l1< = l2  r1 <= r2 ;   i-> l1 to l2  j-> r1 to r2 ;   sum +=array[i][j] ;
*/
int rectangularSum(vector <vector<int> > &matrix, int l1, int r1, int l2 , int r2){

    int sum=0;
    for (int i=l1;i<=l2; i++){
        for (int j=r1; j<=r2; j++){
            sum +=matrix[i][j];
        }
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter n : "<<endl;
    cin>>n;
    int m;
    cout<<"Enter m : "<<endl;
    cin>>m;

    vector <vector<int> > matrix(n, vector<int> (m));
    cout<<"Enter elements of matrix : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }
    int l1;
    cout<<"Enter l1 : "<<endl;
    cin>>l1;
    int r1;
    cout<<"Enter r1 : "<<endl;
    cin>>r1;
    int l2;
    cout<<"Enter l2 : "<<endl;
    cin>>l2;
    int r2;
    cout<<"Enter r2 : "<<endl;
    cin>>r2;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
    int sum =rectangularSum(matrix, l1, r1, l2 , r2);
    cout<<sum<<endl;

    return 0;
}
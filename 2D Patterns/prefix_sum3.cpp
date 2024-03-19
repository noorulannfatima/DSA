#include<iostream>
#include<vector>
using namespace std;
/* Given a matrix 'a' of dimension n x m and 2 coordinates (l1,r1) ans (l2, r2). Return
the sum of the rectangle from (l1, r1) and (l2, r2).
---Approach 3---
Method: Prefix sum over columns and rows both
-> prefix sum matrix (row wise + column wise)
-> array[l1][r1] contains rectangular sum of [0][0] to [l1][r1]
-> sum+= array[l2][r2]-arrays[l1-1][r2](to delete row)-array[l2][r1-1](to delete column)
+array[l1-1][r1-1](bcs this area is deleted twice)
*/
int rectangularSum(vector <vector<int> > &matrix, int l1, int r1, int l2 , int r2){

    int sum=0;
    // calculating prefix sum array row wise
    for (int i=0; i<matrix.size(); i++){
        for (int j=1; j<matrix[0].size(); j++){
            matrix[i][j]+=matrix[i][j-1];
        }
    }
    // calculating prefix sum array column wise
    for (int i=1; i<matrix.size(); i++){
        for (int j=0; j<matrix[0].size(); j++){
            matrix[i][j]+=matrix[i-1][j];
        }
    }
    // printing prefix sum 2d array 
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[i].size(); j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
    int top_sum=0, left_sum=0, topleft_sum=0;
    if(l1!=0)top_sum= matrix[l1-1][r2];
    if(l2!=0)left_sum=matrix[l2][r1-1];
    if(l1!=0 && l2!=0)topleft_sum=matrix[l1-1][r1-1];

    sum+=matrix[l2][r2] - top_sum - left_sum + topleft_sum;

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
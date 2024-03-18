#include<iostream>
#include<vector>
using namespace std;
// Given an nxm matrix 'a', return all elements of matrix in spiral order.
/* LOGIC:
int direction = 0
1. left -> right = 0   2. top -> bottom = 1
3. right -> left = 2   4. bottom -> top = 3  .... repeat 1. 2. 3. 
! Every time when direction changes, matrix shrinks 
-> we use 4 variables top, right, left, bottom.
1. left -> right -> top ++     2. top -> bottom -> right --
3. right -> left -> bottom --  3. bottom -> top -> left ++

*/
void spiralOrder(vector<vector<int> > &matrix){
    int left =0;
    int right = matrix[0].size()-1;
    int top = 0;
    int bottom = matrix.size()-1;

    int direction =0;

    while(top<=right && left<=right){   //stop loop when they are pointing at same row and column
    // left -> right
    if(direction==0){
        for(int col=left; col<=right; col++){
            cout<<matrix[top][col]<<" ";
        }
        top ++;
    }
    // top -> bottom
    else if(direction==1){
        for(int row=top; row<=bottom; row++){  // prints row
            cout<<matrix[row][right]<<" ";
        }
        right --;
    }
    // right -> left
    else if(direction==2){
        for(int col=right; col>=left; col--){   // prints column
            cout<<matrix[bottom][col]<<" ";
        }
        bottom --;
    }
    //bottom -> top
    else {
        for(int row=bottom; row>=top; row--){
            cout<<matrix[row][left]<<" ";
        }
        left ++;
    }
    direction=(direction+1)%4;  // (3+1)%4 =0
    // 1 2 3 4
    }
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
    spiralOrder(matrix);

    return 0;
}
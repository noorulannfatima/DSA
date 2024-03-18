#include<iostream>
#include<vector>
using namespace std;
// Given a positive integer n, generate n x n matrix filled with elements from 1 to n2 in spiral order.
vector<vector<int> > createSpiralMatrix(int n){

    vector<vector<int> > matrix(n, vector<int>(n));
    int left =0;
    int right = n-1;
    int top = 0;
    int bottom = n-1;

    int direction =0;
    int value =1;

    while(left<=right && top<=bottom){   //stop loop when they are pointing at same row and column
    // left -> right
    if(direction==0){
        for(int i=left; i<=right; i++){
            matrix[top][i]=value++;
        }
        top ++;
    }
    // top -> bottom
    else if(direction==1){
        for(int j=top; j<=bottom; j++){  // prints row
            matrix[j][right]=value++;
        }
        right --;
    }
    // right -> left
    else if(direction==2){
        for(int i=right; i>=left; i--){   // prints column
            matrix[bottom][i]=value++;
        }
        bottom --;
    }
    //bottom -> top
    else {
        for(int j=bottom; j>=top; j--){
            matrix[j][left]=value++;
        }
        left++;
    }
    direction=(direction+1)%4;  // (3+1)%4 =0
    // 1 2 3 4
    }
    return matrix;
}

int main(){
    int n;
    cout<<"Enter n : "<<endl;
    cin>>n;

    vector <vector<int> > matrix(n, vector<int> (n));

    matrix= createSpiralMatrix(n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
    
    return 0;
}
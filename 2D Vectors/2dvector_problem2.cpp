#include<iostream>
#include<vector>
#include <climits>
using namespace std;
//! alternative solution
// Given a boolean 2D array, where each row is sorted. Find the row with the max number of 1s.
/* LOGIC

*/
int leftMostOneRow(vector < vector<int> >&V){
    int leftMostOne= -1;
    int maxOnesRow = -1;
    int j=V[0].size()-1;
    
    //finding leftmost row in 0th row
    while(j>=0 && V[0][j]==1){
        leftMostOne=j;
        maxOnesRow=0;
        j--;
    }
    // checking rest of the rows if we can find the one left to leftMostOne.
    for (int i=1;i<V.size();i++){

    while(j>=0 && V[i][j]==1){
        leftMostOne=j;
        j--;
        maxOnesRow=i;
        
        }
    }
    return leftMostOne;
}

int main(){
    int n;
    cout<<"Enter n : "<<endl;
    cin>>n;
    int m;
    cout<<"Enter m : "<<endl;
    cin>>m;

    vector <vector<int> > vec(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin>>vec[i][j];
        }
    }
    int res= leftMostOneRow(vec);
    cout<<res<<endl;



    return 0;
}
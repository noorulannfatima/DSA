#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Given a square matrix,turn it by 90 degrees in the clockwise without using any extra space.

void rotateArray(vector<vector<int> >&vec){
    int n =vec.size();
    //transpose
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){   // for low daigonal elements j<i and when j=i it reaches diagnal.
            swap(vec[i][j],vec[j][i]);
        }
    }
    // reverse every row 
    for(int i=0; i<n; i++){
        reverse(vec[i].begin(),vec[i].end());
    } 
    return;
}
int main(){
    int n;
    cout<<"Enter n : "<<endl;
    cin>>n;

    vector <vector<int> > vec(n, vector<int> (n));
    cout<<"Enter elements of matrix : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>vec[i][j];
        }
    }

    rotateArray(vec);
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<vec[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}
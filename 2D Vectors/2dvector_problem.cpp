#include<iostream>
#include<vector>
#include <climits>
using namespace std;
//! having problem in solving this
// Given a boolean 2D array, where each row is sorted. Find the row with the max number of 1s.
/* LOGIC
2nd row (key : array is sorted)
-> first occurence of 1 = 2
-> no of ones = columns - index  = 4-2 =2
*/
int maximumOnesRow(vector<vector<int> >&V){
    int maxOnes= INT_MIN;
    int maxOnesRow = -1;   // in case if no 1 is present
    int column=V[0].size();

    for (int i=0;i<V.size();i++){
        for(int j; j<V[i].size();j++){

            if(V[i][j]==1){
                int numberofOnes = column - j;
                if(numberofOnes > maxOnes){
                    maxOnes = numberofOnes;
                    maxOnesRow = i;
                }
                break; // if we get first occurence then is no need to go further
            }
            return maxOnesRow;
        }
    }
    
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
    int res= maximumOnesRow(vec);
    cout<<res<<endl;



    return 0;
}
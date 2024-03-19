#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/* Given an integer array 'a', return the prefix sum/running sum in the same array 
without creating a new array.
*/
void runningSum(vector<int> &v){
    for(int i=1; i<v.size(); i++){
        v[i]=v[i-1]+v[i];
    }
    return;
}
int main(){
    int n;
    cout<<"Enter the size :";
    cin>>n;

    cout<<"Enter the elements :"<<endl;
    vector <int> v;
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    runningSum(v);

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    } cout<<endl;


    return 0;
}

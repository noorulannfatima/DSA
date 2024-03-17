#include<iostream>
#include<vector>
using namespace std;
// Check if the given array is sorted or not.
int main(){
    vector<int> v(6);
    cout<<"Enter elements : "<<endl;
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    
    bool sortedflag=true;
    for(int i=1;i<v.size();i++){
        if(v[i]<=v[i-1]){
            sortedflag= false;
        }
    }
    cout<<sortedflag<<endl;
    return 0;
}
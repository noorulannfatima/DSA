#include<iostream>
#include<vector>
using namespace std;
// Find the number of elements strictly greater then value x.
int main(){
    vector<int> v(6);
    cout<<"Enter elements : "<<endl;
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    int x;
    cout<<"Enter x : "<<endl;
    cin>>x;

    int count=0;
    for(int i=0; i<v.size();i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<"Count : "<<count<<endl;
    return 0;
}
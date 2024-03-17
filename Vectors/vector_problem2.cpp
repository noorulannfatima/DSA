#include<iostream>
#include<vector>
using namespace std;
// Find the number of occurences of a particular element.
int main(){
    vector<int> v(6);
    cout<<"Enter elements : "<<endl;
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    int x;
    cout<<"Enter x : "<<endl;
    cin>>x;

    int occurrence =0;
    for(int ele:v){
        if(ele==x){
            occurrence++;
        }
    }
    cout<<"Occurrence : "<<occurrence<<endl;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
// Find the last occurrence of an element x in a given array.
int main(){
    vector<int> v(6);
    cout<<"Enter elements : "<<endl;
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter x : "<<endl;
    cin>>x;
    int occurrence= -1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurrence=i;
        }
    }
    // Another method to write loop, in this we start from end and break when find first occurrence of x
    /*
    for(int i=v.size()-1; i>=0; i--){
        if(v[i]==x){
            occurrence=i;
            break;
        }
    }
    */
    cout<<"Occurrence : "<<occurrence<<endl;

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
// sort an arrays consisting of only 1s and 0s without traversing it.
void sortZerosAndOnes(vector<int> &v){
    int left_ptr = 0;
    int right_ptr = v.size()-1;

    while(left_ptr<right_ptr){
        if(v[left_ptr]==1 && v[right_ptr]==0){
            v[left_ptr++]= 0;
            v[right_ptr--]= 1;
        }
        if(v[left_ptr]==0){
            left_ptr++;
        }
        if(v[right_ptr]==1){
            right_ptr--;
        }
    }
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
    sortZerosAndOnes(v);

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    } cout<<endl;


    return 0;
}
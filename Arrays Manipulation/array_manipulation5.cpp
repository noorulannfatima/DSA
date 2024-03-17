#include<iostream>
#include<vector>
using namespace std;
// sort an arrays consisting of only 1s and 0s.
void sortZerosAndOnes(vector<int> &v){
    int zeros_count=0;
    // counting zeros
    for(int ele:v){  // for each loop
        if(ele==0){
            zeros_count++;
        }
    }

    for (int i=0; i<v.size(); i++ ){
        if(i<zeros_count){
            v[i]=0;
        }
        else{
            v[i]=1;
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
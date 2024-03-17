#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*Rotate a given array'a' by k steps, where k is non negative.
Note: k can be greater than n as well where n is the size if array 'a'. */
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    int k=2;
    // k can be greater than n
    k=k%v.size();
    
    reverse(v.begin(),v.end());  // 5 4 3 2 1
    reverse(v.begin(),v.end()+k); //  4 5 3 2 1
    reverse(v.begin()+k,v.end());  // 4 5 1 2 3

    for (int a:v){
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}
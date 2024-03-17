#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/* Given an integer array 'a' sorted in non decreasing order, retrun an array of the square of each 
number sorted in non decreasing order.
-> If values are negative than array is not sorted in non decreasing order.
-> so we check absolute values
*/
void sortedSquaredArray(vector<int> &v){
    vector <int> ans;

    int left_ptr = 0;
    int right_ptr = v.size() -1;

    while(left_ptr<=right_ptr){
        if(abs(v[left_ptr])<abs(v[right_ptr])){
            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        } else{
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
        
    }
    reverse(ans.begin(),ans.end());
    for (int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    } cout<<endl;
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
    sortedSquaredArray(v);

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    } cout<<endl;


    return 0;
}
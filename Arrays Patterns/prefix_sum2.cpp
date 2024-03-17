#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/* Check if we partition into two subarrays with equal sum. More formally
check that the prefex sum of a part of an array is equall to the suffix sum of the rest of the array.
*/
bool checkPrefixSuffixSum(vector<int> &v){
    int total_sum=0;
    for(int i=0; i<v.size(); i++){
        total_sum+=v[i];
    }
    int prefix_sum =0;
    for(int i=0; i<v.size(); i++){
        prefix_sum+=v[i];
        int suffix_sum=total_sum - prefix_sum;
        if(suffix_sum==prefix_sum){
            return true;
        }
    }
    return false;
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
    cout<<checkPrefixSuffixSum(v)<<endl;

    return 0;
}

#include<iostream>
#include<vector>
using namespace std;
/* 
Given Q queries check if the given number is present in the array or not.
Note: values of all the elements in array is less than 10 or power 5
*/
int main(){
    int n;
    cout<<"Enter size of array";
    cin>>n;

    cout<<"Enter elements of array : ";
    vector <int> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }

    //To the frequency of a given number
    const int N= 1e5 + 10;
    vector <int> freq(N,0);
    for (int i=0; i<n; i++){
        freq[v[i]]++;
    }

    cout<<"Enter queries : ";
    int q;
    cin>>q;

    // we can also return bool or frequency
    while(--q){
        int queryelement;
        cin>>queryelement;
        cout<<"frequency of "<<queryelement<<" is "<<freq[queryelement]<<endl;;
    }

    return 0;
}
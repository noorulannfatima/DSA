#include<iostream>
#include<vector>
using namespace std;
/* Given an array of integer of size n. Answer q queries where you need to print 
the sum of values in a given range of indices from l to r (both including).
Note: The values of l and r in queries follow 1-based indexing.
-> zero based indexing: 0 .... n-1
-> 1-based indexing: 1 ... n
*/
int main(){
    int n;
    cout<<"Enter the size :";
    cin>>n;

    // -> index : 0  1  2  3  4  5   so (n+1) -> 1 -based indexing
    // -> vector  0 1x 2x 3x 4x 5x 6x
    cout<<"Enter the elements :"<<endl;
    vector<int> v(n+1,0);
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }
    // Calculating prefex sum
    for(int i=1;i<=n;i++){
        v[i]+=v[i-1];
    }
    int q;
    cout<<"Enter queries : "<<endl;
    cin>>q;

    while(q--){
        int l, r;
        cout<<"l :"<<endl;
        cin>>l;
        cout<<"r :"<<endl;
        cin>>r;

        int ans=0;
        // ans = prefexSumArray[r]-prefexSumArray[l-1]
        ans = v[r]-v[l-1];
        cout<<ans<<endl;
    }
    return 0;
}

/*  Dry Run
-> index:   0 1 2 3 4 5
-> array:   0 5 1 2 3 4
            0 5 6 8 11 15 -> prefex sum array
l=1,r=3 -> ans = v[r]-v[l-1] = v[3]-v[0] = 8 - 0
*/


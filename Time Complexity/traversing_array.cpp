#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
// Time complexity for tranversing an array of lenght N.
    int array[]={1,2,3,4,5,6,7,8,9};
    int n = 9;
    for (int i=0; i<n;i++){     // linear growth 
        cout<<array[i]<<"\n";    // O(n)
    }
// Time complexity when we are traversing two individual arrays of lenght m1 and m2 respectively.
    int arr1[]={1,2,3,4,5,6,7,8,9};
    int m1 =9;
    int arr2[]={9,8,7,6,5,4,3,2,1};
    int m2 =9;
    int sum1=0;
    for (int i=0; i<m1;i++){   // 3n which is approximately = n
        sum1+=arr1[i];
    }
    int sum2 =0;
    for (int i=0; i<m2;i++){    // O(m1 + m2)
            sum2+=arr2[i];
        }
        cout<<sum1<<" "<<sum2<<endl;
// Time complexity for nested loop
    int l = 5;
    for (int  i=0; i<l;i++){
        for (int j=0; j<l;j++){   //O(n^2)
            cout<<" * ";
        }
        cout<<"\n";
    } 
// Time complexity for traversing the array and multiply the increment pointer by 2.
    int q = 5;
    for (int  i=0; i<q;i++){
        for (int j=0; j<sqrt(q);j++){   
            cout<<" * ";
        }
        cout<<"\n";
    } 
/* 
total operations(instruction) -> n*sqrt (n)
worst case -> O(n*sqrt(n))
*/
    return 0;
}
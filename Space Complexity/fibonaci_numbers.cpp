#include<iostream>
using namespace std;
// find 8th fibocachi
/* 
Space complexity -> extra memory space requirement of an algorithm
-> input or output are not include in extra space
Using Asymptotic analysis -> with respect to input if change occurs in space then we consider it.

*/
int main(){
    int n =8;
    int a= 0;
    int b= 1;
    int c= 1;  // ith fibonaci
    for (int i=2; i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
// space -> O(1)  constant ;
// time -> O(n)
    return c;
}
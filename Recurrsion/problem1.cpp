#include<iostream>
using namespace std;
// Given an integer, find out sum of its digits using recursion.
/* LOGIC:
-> Recurrsively go and calc sum of d-1 digits and the last digit to it.
-> to calc the last digit in n -> take mode of it -> n%10 
-> to remove last digit-> n/10 -> divide the number with 10
-> f(n)= f(n/10)+ (n%10)
*/
int f(int n){
    // base case
    if(n<=9 and n>=0) return n;
    //assumption
    return f(n/10)+(n%10);
}
int main(){
    int result =f(1234);
    cout<<result;

    return 0;
}
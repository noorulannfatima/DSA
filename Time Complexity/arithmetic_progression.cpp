#include<iostream>
using namespace std;
int optimized_sum(int x, int y){
    int n = (y - x +1);
    int a = x;
    int result = (n *(2*a + (n-1)*1)) /2;
    return result;
}
int main(){
    cout<<optimized_sum(1,10000);   // O(n)  linear

    return 0;
}

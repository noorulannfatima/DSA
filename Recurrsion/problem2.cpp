#include<iostream>
using namespace std;
// given two numbers p&q, find the value p^q using a recursive function.
/*LOGIC:

*/
int f (int p, int q){
    // base case
    if(q == 0) return 1;
    // assumption
    return p = p * f(p, q-1);

}
int main(){
    int result = f(2, 3);
    cout<< result;

    return 0;
}
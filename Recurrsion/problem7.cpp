#include<iostream>
using namespace std;
//Write a program to check wether a given number is palindrom or not. 
bool f(int num, int *temp){
    // base case
    if(num >= 0 and num <= 9 ){
        int lastDigitOfTemp = (*temp)%10;
        (*temp) /= 10;
        return (num == lastDigitOfTemp);
    }
    bool result = (f(num/10, temp) and (num%10) == ((*temp)%10));
    (*temp) /=10;
    return result;
}
int main(){
    int num =12321;
    int anotherNum = num;
    int *temp = &anotherNum;
    cout<<f(num, temp);

    return 0;
}
// Armstrong Number: An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to 'kth' power is equal to the number itself. 
//For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.


#include <iostream>
#include <math.h>
using namespace std;

int checkArmstrong(int n){
    //Counting the number of digits in a number
    int temp=n;
    int count=0;
    while(temp!=0){
        count++;
        temp/=10;
    }
    // adding the power of number(count)
    int sum=0;
    int num=n;
    while(n>0){
    int digit=n%10;
    sum+=pow(digit,count);
    n/=10;
    }
    if(sum==num){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}

int main(){
    int n;
    cin>>n;
    checkArmstrong(n);
    return 0;
}
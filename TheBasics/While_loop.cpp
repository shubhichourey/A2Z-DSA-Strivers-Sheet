/*Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately.

Digits mean numbers, not places! That is, if the given integer is "132456", even digits are 2, 4, and 6, and odd digits are 1, 3, and 5.

Constraints
0<= 'n' <=10000*/

#include<iostream>
using namespace std;

int main() {
	int num;
	cin>>num;
	int evensum=0, oddsum=0;
	while(num!=0){
		int num1=num%10;
		if(num1%2==0){
			evensum+=num1;
		}
		else{
			oddsum+=num1;
		}
		num/=10;
	}
	cout<<evensum<<" "<<oddsum<<endl;
	return 0;
}
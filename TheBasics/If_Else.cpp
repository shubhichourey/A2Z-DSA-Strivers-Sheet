/*You are given two numbers 'a' and 'b'.
Compare the numbers and print the relation.
Print “smaller”, “greater” or “equal” when ‘a’ is smaller than ‘b’, greater than ‘b’, or equal to ‘b’ respectively.*/


#include <iostream>
using namespace std;

string compareIfElse(int a, int b) {
	if(a<b){
		return "smaller";
	}
	else if(a>b){
		return "greater";
	}
	else if(a==b){
		return "equal";
	}
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<compareIfElse(a,b);
    return 0;
}

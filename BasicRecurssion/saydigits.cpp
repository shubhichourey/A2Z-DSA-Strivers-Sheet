//Q. i/p: 432 o/p: four three two
#include <iostream>
using namespace std;
void saydigits(int n , string arr[]){
    if(n==0){
        return ;
    }
    int digit=n%10;
    n=n/10;

    saydigits(n,arr);
    cout<<arr[digit]<<" ";
}
int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    saydigits(n,arr);
    return 0;
}
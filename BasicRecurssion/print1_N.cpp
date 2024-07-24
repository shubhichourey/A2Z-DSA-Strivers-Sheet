/*#include <iostream>
using namespace std;
void printN(int i,int n){
    if(i>n){
        return ;
    }
    cout<<i<<endl;
    printN(i+1,n);
}
int main(){
    int n ;
    cin>>n;
    printN(1,n);
    return 0;
}*/

//N-1
#include <iostream>
using namespace std; 
void printNum(int i,int n){
    if(i<1){
        return ;
    }
    cout<<i<<" ";
    printNum(i-1,n);
}
int main(){
    int n;
    cin>>n;
    printNum(n,n);
    return 0;
}
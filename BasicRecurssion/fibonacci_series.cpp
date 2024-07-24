#include <iostream>
using namespace std;
/*int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1 ;
    }
    int num=fibonacci(n-1)+fibonacci(n-2);
    return num;
    }

int main(){
    int fib=fibonacci(4);
    cout<<fib<<endl;
     return 0;
}*/

int main()
{
    int n;
    cin>>n;
    if(n==0){
        cout<<"0";
    }
    else if(n==1){
        cout<<"0"<<" "<<"1"<<endl;
    }
    else{
        int fib[n];
            fib[0]=0;
            fib[1]=1;
        for(int i=2;i<=n;i++){
            fib[i]=fib[i-1]+fib[i-2];
        }
        for(int i=0;i<n;i++){
        cout<<fib[i]<<" ";
}
    }
    return 0;
}



// Nth Fibonacci Number

/*The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -

    F(n) = F(n - 1) + F(n - 2), 
    Where, F(1) = 1, F(2) = 1


Provided 'n' you have to find out the n-th Fibonacci Number. Handle edges cases like when 'n' = 1 or 'n' = 2 by using conditionals like if else and return what's expected.

"Indexing is start from 1"*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
        int num;
        cin>>num;
        int ans=1;
        int f=1;
        int s=1;
        if(num==1) cout<< ans;
        else if(num==2) cout<< ans;
        else{
                for(int i=2;i<num;i++)
                {
                        ans=f+s;
                        f=s;
                        s=ans;
                }
                cout<< ans;
        }
        return 0;
       
}
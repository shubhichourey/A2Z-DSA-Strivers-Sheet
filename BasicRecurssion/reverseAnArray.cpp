#include <iostream>
using namespace std;
//METHOD 1: swapping the first and last and then incrementing and decrementing

// Time complexity: O(n)
//Space: O(1)

/*void reverse(int l,int r,int arr[]){
    if(l>=r) return;
    swap(arr[l], arr[r]);
    reverse(l+1,r-1,arr);
}
void printArray(int n, int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(0,n-1,arr);
    printArray(n,arr);
    return 0;
}*/

//METHOD 2:
//iterate upto n/2 and swapping elements

//TC: O(N)
//SC: O(1)

void reverse(int i,int n, int arr[]){
    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverse(i+1,n,arr);
}

void printArray(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(0,n,arr);
    printArray(n,arr);
    return 0;
}
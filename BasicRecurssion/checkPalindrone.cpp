//TC: O(N/2) ; SC:O(N/2)

#include <iostream>
using namespace std;
int checkPalindrome(string s, int i){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return checkPalindrome(s,i+1);
}
int main(){
    string s="madam";
    cout<<checkPalindrome(s,0);
    return 0;
}
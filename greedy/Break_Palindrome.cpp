#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string &s) {
    int len=s.length();
    for (int i=0;i<len/2;i++) {
        if (s[i]!=s[len-i-1])
            return false;
    }
    return true;
}
string Break_Palindrome(string s){
    int len=s.length();
    if (len<=1) return "";
    for (int i=0;i<len/2;i++) {
        if (s[i]!='a') {
            s[i]='a';
            return s;
        }
    }
    s[len-1]='b';
    return s;
}
int main() {
    string input;
    cin>>input;

    string result=Break_Palindrome(input);
    cout<<result;

}


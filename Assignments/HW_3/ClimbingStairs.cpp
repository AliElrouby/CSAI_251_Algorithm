#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int Top_UP_ClimbingStairs(int n){
    if(n==0||n==1){
        return 1;
    }
    return Top_UP_ClimbingStairs(n-1)+ Top_UP_ClimbingStairs(n-2);

}

int Bottom_Up_ClimbingStairs(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int arr[n + 1];
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i <= n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n];
}


int main() {
    int n;
    cin>>n;
    // cout<<Top_UP_ClimbingStairs(n);
    cout<<Bottom_Up_ClimbingStairs(n);
    
}


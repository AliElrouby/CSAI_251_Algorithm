#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int longest_increasing_subsequence(int size,vector<int> Arr) {
    vector<int> length(size, 1);
    for (int i = 1; i < size; i++) {
        for (int j = 0; j < i; j++) {
            if (Arr[i] > Arr[j]) {
                length[i] = max(length[j] + 1, length[i]);
            }
        }
    }

    int result = length[0];
    for (int i = 1; i < size; i++) {
        if (length[i] > result) {
            result = length[i];
        }
    }
    return result;
}
int main() {

    int size;

    cin>>size;
    vector<int> Arr(size);
    for(int i=0;i<size;i++){
        cin>>Arr[i];
    }
    cout<<longest_increasing_subsequence(size,Arr);
}


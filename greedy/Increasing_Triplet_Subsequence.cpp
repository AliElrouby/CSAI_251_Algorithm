#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool increasingTriplet(vector<int>& nums) {
    bool check =false;
    int count=3;
    for (int i =0;i<nums.size();i++){
        for (int j =0;j<nums.size();j++){

        }
    } 
    return check;
}


int main(){
    int size;
    cin>>size;
    vector<int> num(size);
    for (int i =0 ;i<size;i++){
        cin>>num[i];
    }

 
    cout<<increasingTriplet(num);
}


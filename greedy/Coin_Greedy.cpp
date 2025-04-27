#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void Coin_Greedy(int size,vector<int> change,int num){
    vector<int> result;
    sort(change.begin(),change.end());
    int k=0;
    for (int i=size-1;i>=0;i--){
        if (num<change[i]){
            continue;
        }        
        while(num>=change[i]){
            num=num-change[i];
            result.push_back(change[i]);
        }
        
    }
    cout<<"[ ";
    for (int i: result){
        cout<<i<<" ";
    }
    cout<<" ]";
}

int main() {
    int size,num;
    cin>>size;

    vector<int>change(size);
    for (int i = 0; i < size; i++) {
        cin >> change[i];
    }
    cin>>num;

    Coin_Greedy(size,change,num);

}

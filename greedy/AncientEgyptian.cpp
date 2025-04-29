#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void Egypt(int num){
    vector<int> coins={1, 5, 10, 25, 50, 100};
    sort(coins.rbegin(),coins.rend());
    int count=0;
    int i =0;
    for (int i =0;i<coins.size();i++){
        if (num<coins[i]){
            continue;
        }
        while(num>=coins[i]){
            num-=coins[i];
            cout<<"iteration "<<i<<": " <<num<<endl;
            count+=1;
            continue;
        }
    }   
    cout<<count;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num;
    cin>>num;
    Egypt(num);
    return 0;
}

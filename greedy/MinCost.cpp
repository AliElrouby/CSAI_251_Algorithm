#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void MinCost(int size,vector<int> Coins){
    sort(Coins.begin(),Coins.end());
    int cost=0;
     
    int i=0;
    while(Coins.size()>1){   
        cost+=min(Coins[i],Coins[i+1]);

        if (Coins[i]>Coins[i+1]){
            Coins.erase(Coins.begin() + (i));
        }
        else{
            Coins.erase(Coins.begin() + (i+1));
        }
        if (i >= Coins.size()-1) {
            i = 0;
        }
    }
    cout<<cost;
}

int main() {
    int size;
    cin>>size;
    vector<int> Coins(size);

    for(int i=0;i<size;i++){
        cin>>Coins[i];
    }
    MinCost(size,Coins);

}

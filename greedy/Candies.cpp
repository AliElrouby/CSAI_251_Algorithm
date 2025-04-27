#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void Candies(int size,vector<int> price){
    int total=0;
    vector<int> sorted_price = price;
    sort(sorted_price.rbegin(), sorted_price.rend());

    for (int i=0;i<sorted_price.size();i+=3){
        total+=sorted_price[i]+sorted_price[i+1];
    }
    cout<<total;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    cin>>size;

    vector<int> price(size);
    for (int i=0;i<price.size();i++){
        cin>>price[i];
    }

    Candies(size,price);

    return 0;
}

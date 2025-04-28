#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void Knap_Sack(int size,vector<int> values,vector<int> weights){
    sort(values.begin(),values.end());
    sort(weights.begin(),weights.end());

    vector<vector<int>> items(size,vector<int>(2));
    for (int i=0;i<size;i++){
        items[i][0]=values[i];
        items[i][1]=weights[i];
    }
    cout<<endl;

    cout<<"[";
    for (int i = 0; i < size; i++) {
        cout<<"(";
        
        cout << items[i][0] << "," << items[i][1];
        cout<<")";
        if(i<size-1){
            cout<<",";
        }
        else{
            cout<<"";
        }
    }
    cout<<"]";
}
int main(){


}
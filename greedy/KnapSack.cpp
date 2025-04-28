#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// for(int i=0 ;i<size;i++){
//     cout<<values[i]<< " ";
// }
// cout<<endl;
// for(int i=0 ;i<size;i++){
//     cout<<weights[i]<<" ";
// }

bool compare(vector<int>a,vector<int>b){
    double a_ratio=(1.0*a[0])/a[1];
    double b_ratio=(1.0*b[0])/b[1];
    return (a_ratio>b_ratio);
}

void Knap_Sack(int size,vector<int> values,vector<int> weights,int capacity){
    vector<vector<int>> items(size,vector<int>(2));
    double profit=0;
    double ratio;
    for (int i=0;i<size;i++){
        items[i][0]=values[i];
        items[i][1]=weights[i];
    }
    sort(items.begin(),items.end(),compare);
    for (int i = 0; i < size; i++) {
        cout << items[i][0] << " " << items[i][1]<<endl;
    }
    cout<<endl<<endl;
    
    for (int i =0 ;i<size;i++){
        if(items[i][1]<=capacity){
            capacity-=items[i][1];
            profit+=items[i][0];
            cout<<profit<<"-->";
        }
        else if (items[i][1]>capacity){
            ratio=(1.0 * capacity/items[i][1]);
            profit+=(ratio * items[i][0]);
            cout<<profit<<"-->";
            capacity=0;
            break;
        }
        
    }
    cout<<endl;
    cout<<"The KnapSack is Full !";
}



int main() {
    int size;
    cin>>size;
    vector<int> values(size);
    for(int i=0 ;i<size;i++){
        cin>>values[i];
    }

    vector<int> weights(size);
    for(int i=0 ;i<size;i++){
        cin>>weights[i];
    }
    int capacity;
    cin>> capacity;
    Knap_Sack(size,values,weights,capacity);

}

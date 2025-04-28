#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void Container_OF_Water(int size ,vector<int> towers){
    int i=0;
    int j=size-1;
    int Area=0;
    // for (int i=0;i<size;i++){

    // }
    while (i < j){
        Area=max(Area,(j - i)*min(towers[i],towers[j]));
        if (towers[i]>towers[j]){
            j--;
        }
        else if (towers[i]<towers[j]){
            i++;
        }
    }
    cout<<Area;
    
    
    
}


int main() {
    int size;
    cin>>size;

    vector<int>towers(size);
    for (int i =0;i<size;i++){
        cin>>towers[i];
    }

    Container_OF_Water(size,towers);

}


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
ILLUSTRATION : https://medium.com/@lovelyndavid/two-pointer-technique-solving-container-with-most-water-leetcode-96a19f1a2f9b
*/

void Container_OF_Water(int size ,vector<int> towers){
    int i=0;
    int j=size-1;
    int Area=0;

    while (i < j){
        Area=max(Area,(j - i)*min(towers[i],towers[j]));
        if (towers[i]>towers[j]){
            j--;
        }
        else{
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


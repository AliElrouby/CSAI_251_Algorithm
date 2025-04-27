#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int Al_Mutanabbis(int size1,vector<string> v_string1,int size2,vector<string> v_string2){
    int count=0;
    int size;

    if(size1<size2){
        size=size2;
    }
    else{
        size=size1;
    }
    for(int i=0;i<size;i++){
        if (v_string1[i]==v_string2[i])
            count++;
        else{
            continue;
        }
    }
    return count;
}


int main() {

    int size1,size2;

    cin>>size1;
    vector<string> v_string1(size1);


    for(int i=0;i<size1;i++){
        cin>>v_string1[i];
    }
    cin>>size2;
    vector<string> v_string2(size2);
    for(int i=0;i<size2;i++){
        cin>>v_string2[i];
    }
    cout<<Al_Mutanabbis(size1,v_string1,size2,v_string2);
}


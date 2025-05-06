#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void Magic(int size,vector<int>& start,vector<int>& end){
    int result=1;
    sort(start.begin(),start.end());
    sort(end.begin(),end.end());
    for(int i =0;i<size;i++){
        if(start[i] < end[i] && start[i] < start[i+1] &&end[i] <=start[i+1] && end[i]<end[i+1]){
            result+=1;
        }
    }
    cout<<result;
  
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size;
    cin>>size;
    
    vector<int> start(size);
    vector<int> end(size);
    
    for (int i =0;i<size;i++){
        cin>>start[i];
    }
    for (int i =0;i<size;i++){
        cin>>end[i];
    }
    Magic(size,start,end);
    
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int library_Problem(int size,vector<int> books){
        vector<int> sorted = books;
        sort(sorted.begin(), sorted.end());
    int count=0;
    for (int i=0;i<books.size();i++){
        if(books[i]!=sorted[i]){
            count++;
        }
    }
    return count;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    cin>>size;

    vector<int> books(size);
    for (int i=0;i<books.size();i++){
        cin>>books[i];
    }
    cout<<library_Problem(size,books);
}
//  90 25 85
//  25 85 90

// 21 15 14
// 14 15 21
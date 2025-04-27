#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Alaa(int num){
    if (1<=num && num <=100){
        cout<<num-1;
    }
}



int main() {
    int num;
    cin>>num;
    Alaa(num);

}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


void Challenge(int test,vector<string> &coders){
    vector <int> results;
    int string_size;
    cout<<"-------------------------------------------------"<<endl;
    
    for (int i =0 ;i < test; i++){
        int j=0;
        int result=0;
        string s = coders[i];
        string_size = s.size();

        if(string_size > 1 ){
            while(j < string_size - 1){
                if (s[j] != s[j+1]){
                    result+=1;
                    j+=2;
                }
                else{
                    j++;
                }
        }
    }
    results.push_back(result);
}

    int size_res=results.size();
        
    for (int i =0 ;i<size_res;i++){
        cout<<results[i]<<endl;
    }   

    cout<<"results size "<<size_res<<endl;

}

int main() {
    
    int test;
    cin>>test;
    
    vector<string> coders(test);
    
    for (int i =0 ;i<test;i++){
        cin>>coders[i];
    }
    
    Challenge(test,coders);
}

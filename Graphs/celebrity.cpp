#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Graphs{
public:
    void matrix(int size,vector<vector<int>> &matrix){
        matrix = vector<vector<int>>(size, vector<int>(size));

    }
    void matrix_input(int size,vector<vector<int>> &matrix){
        for (int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                    int edge;
                    cin>>edge;
                    matrix[i][j]=edge;
            }
        }
    }
    void Celebrity(int size,vector<vector<int>> &matrix){
        int result=-1;
        for (int i = 0; i < size; i++) {
            bool knowsnobody=true;
            bool knownby=true;
            for(int j=0;j<size;j++){

                if(matrix[i][j]==1){
                    knowsnobody=false;
                }
                if(matrix[j][i]==0){
                   knownby=false;
                }
                  
            }
            if(knownby && knowsnobody){
                result=i; 
                
            }
        }
        cout<<result; 
    }
    
};

int main() {
    int size;
    cin>>size;
    vector<vector<int>> matrix(size, vector<int>(size, 0));
    Graphs g;
    g.matrix(size,matrix);
    g.matrix_input(size,matrix);
    g.Celebrity(size,matrix);

}

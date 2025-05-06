#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Graphs{
public:
    void Adj_matrix(int size,vector<vector<int>> &adj_matrix){
        adj_matrix = vector<vector<int>>(size, vector<int>(size, 0));

    }
    void matrix_input(int size,vector<vector<int>> &adj_matrix){
        cout<<"Enter your edges"<<endl;
        for (int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                    cout<<"for vertix "<<i<<" and vertix "<< j<<" YES --> (1) / NO --> (0)"<<endl;
                    int edge;
                    cout<<"Edge : ";
                    cin>>edge;
                    adj_matrix[i][j]=edge;
            }
        }
    }
    void display_adj_matrix(int size,vector<vector<int>> &adj_matrix){
        cout<<endl;
        cout<<"-----[ Adjacency Matrix ]-----"<<endl;
        for (int i=0;i<size;i++){
            cout<<"|";
            for(int j=0;j<size;j++){
                cout<<" "<<adj_matrix[i][j]<<" ";
            }
            cout<<"|";
            cout<<" "<<endl;
        }
    }


    void adj_List(int size,vector<vector<int>> &adj_List){
        adj_List=vector<vector<int>>(size);
    }
    void input_adj_List(int size,vector<vector<int>> &adj_List){
        for (int i=0;i<size;i++){
            int numNeighbors;
            cout << "Enter number of neighbors for vertex " << i << ": ";
            cin >> numNeighbors;
            cout<<"Enter neighbors of vertex "<<i<<" : "<<endl;
            for(int j=0;j<numNeighbors;j++){
                int edge;
                cin>>edge;
                adj_List[i].push_back(edge);
                }
        }
    }

    void display_adj_List(int size,vector<vector<int>> &adj_List){
        cout<<endl;
        cout<<"-----[ Adjacency List ]-----"<<endl;
        for (int i = 0; i < size; i++) {
            cout << i << " --> ";
            for (int j = 0; j < adj_List[i].size(); j++) {
                cout << adj_List[i][j] << " ";
            }
            cout<<endl;
        }
    }
};

int main() {
    int size;
    cin>>size;
    vector<vector<int>> adj_matrix(size,vector<int>(size,0));
    vector<vector<int>> adj_List(size,vector<int>(size,0));
    Graphs g;
    // g.Adj_matrix(size,adj_matrix);
    // g.matrix_input(size,adj_matrix);
    // g.display_adj_matrix(size,adj_matrix);
    g.adj_List(size,adj_List);
    g.input_adj_List(size,adj_List);
    g.display_adj_List(size,adj_List);

}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Graph {
    int n;
    vector<vector<int>> matrix;
public:
    Graph(int no_of_vectors) {
        n = no_of_vectors;
        matrix.resize(n, vector<int>(n, 0));
    }

    void addEdge(int source, int destination) {
        matrix[source][destination] = 1;
        matrix[destination][source] = 1;
    }

    void DFS(int node, vector<bool>& visited) {
        visited[node] = true;
        for (int i=0;i<n;++i){
            if (matrix[node][i] == 1 && !visited[i]) {
                DFS(i, visited);
            }
        }
    }

    int count_Connected_Components() {
        vector<bool> visited(n,false);
        int components = 0;
        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                DFS(i, visited);
                components++;
            }
        }
        return components;
    }
};

int main() {
    int nodes,edges;
    cin >> nodes >> edges;

    Graph g(nodes);
    for (int i=0;i<edges;i++) {
        int u,v;
        cin>>u>>v;
        g.addEdge(u, v);
    }
    cout<<g.count_Connected_Components();
}

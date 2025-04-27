#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Graph {
    int nodes;
    vector<vector<int>> matrix;
public:
    Graph(int no_of_vectors) {
        nodes = no_of_vectors;
        matrix.resize(nodes + 1, vector<int>(nodes + 1, 0));
    }

    void addEdge(int source, int destination) {
        matrix[source][destination] = 1;
        matrix[destination][source] = 1;
    }

    bool DFS(int node, int parent, vector<bool>& visited) {
        visited[node] = true;
        for (int i = 1; i <= nodes; i++) {
            if (matrix[node][i]) {
                if (!visited[i]) {
                    if (DFS(i, node, visited)){
                       return true; 
                    } 
                } else if (i != parent) {
                    return true;
                }
            }
        }
        return false;
    }

    bool isTree() {
        vector<bool> visited(nodes + 1, false);
        if (DFS(1, -1, visited)){
            return false;
        } 

        for (int i = 1; i <= nodes; i++) {
            if (!visited[i]){
               return false; 
            } 
        }
        return true;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    if (m != n - 1) {
        cout << "NO";
        return 0;
    }

    Graph g(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }

    if (g.isTree()) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

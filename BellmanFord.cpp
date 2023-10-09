#include <iostream>
using namespace std;
vector<int> bellman_ford(int V, vector<vector<int>> & edge, int S){
    vector<int> dist(V, 1e8);
    for(int i=0;i<V;i++){
        for(auto it:edges){
            int u = it[0];
            int v = it[1];
            int wt = it[2];

            if(dist[u]!= 1e8 && dist[u + wt <dist[v]]) dist[v]=dist[u]+wt;
            return dist;
        }
    }
}
int main(){
    vector<vector<int>> & edge;
    bellman_ford(3,edge,9);
    return 0;
}

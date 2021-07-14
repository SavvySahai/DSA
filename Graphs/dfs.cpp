#include <bits/stdc++.h>
using namespace std;
 
//Pass by reference as we don't want to pass just a copy. As passing by copy wouldn't update it everytime we pass a new value.
//Using recursive as the logic says to go to the depth and then return, hence using recur.

void dfs(int node, unordered_map<int, bool> &visited, unordered_map<int,vector<int>> &adj){
    cout<<node<<" ";
    visited[node] = true;

    for(int neighbour : adj[node]){
        if(!visited[neighbour]){
            dfs(neighbour,visited,adj);
        }
    }
}

//Using itr as we need to search in more like a loop fashion, as we travese the breadths first.

void bfs(unordered_map<int,vector<int>>adj){
    queue<int> nodes;
    unordered_map<int,bool> visited;
    nodes.push(1);
    visited[1] = true;


    while(!nodes.empty()){
        int current = nodes.front();
        nodes.pop();
        cout<<current<<" ";

        for(int neighbour : adj[current]){
            if(!visited[neighbour]){
                nodes.push(neighbour);
                visited[neighbour] = true;

            }

        }


    }

}


    int main(){
    vector<vector<int>> edges = {{1,2},{1,5},{2,3},{2,6},{3,4},{3,5},{5,6}};
    unordered_map<int, bool> visited;
    unordered_map<int, vector<int>> adj;

    for(vector<int> edge : edges){
        adj[edge[0]].push_back(edge[1]);    //to join the 1st list to the second
        adj[edge[1]].push_back(edge[0]);    //to join the 2nd list to the first
    }

    dfs(2,visited,adj);
    cout<<endl;
    bfs(adj);

    return 0;
}
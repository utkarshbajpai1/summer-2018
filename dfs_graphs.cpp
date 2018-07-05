#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef double d;
/*bool compare(string &s1,string &s2)  // sort for multiple strings
{return s1.size() < s2.size();// sort(arr, arr+n, compare);}*/
vector<int> adj[10];
bool visited[10];

void initialize(){
    for(int i=0; i<10; i++){
        visited[i] = false;
    }
}
void dfs(int s){
    visited[s] = true;
    for(int i=0; i<adj[s].size(); i++){
        if(visited[adj[s][i]] == false){
            dfs(adj[s][i]);
        }
    }
}
int main(){
    // ios_base::sync_with_stdio(false);cin.tie(NULL);
    int nodes, edges, components = 0;
    int a, b;
    cin>>nodes>>edges;
    for(int i=0; i<edges; i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    initialize();

    for(int i=1; i<= nodes; i++){
        if(visited[i] == false){
            dfs(i);
            components++;
        }
    }

    cout<<"components -> "<<components;
return 0;
}


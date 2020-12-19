const int maxn = 1e9 + 7;
int n, m;
bool mark[maxn];
vector<int> adj[maxn];

void dfs(int v){
    mark[v] = true;
    for( auto i: adj[v])
        if(!mark[i])
            dfs(i);
}

void input(){
    int u, v;
    cin >> n >> m;
    for(int i = 1 ; i <= m ; i++){
        cin >> v >> u;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
}

void solve(){}

void output(){}

int main() {
    input();
    solve();
    output();
}

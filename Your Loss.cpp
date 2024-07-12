#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int MAXN = 500005;
const int LOG = 20; // log2(MAXN) + 1

vector<int> tree[MAXN];
int a[MAXN];
int depth[MAXN];
int up[MAXN][LOG];
long long prefixXor[MAXN];
long long prefixSum[MAXN];

void buildTree(int n) {
    for (int i = 1; i <= n; ++i) {
        tree[i].clear();
        depth[i] = 0;
        prefixXor[i] = 0;
        prefixSum[i] = 0;
    }

    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
}

void dfs(int node, int parent) {
    up[node][0] = parent;
    for (int i = 1; i < LOG; ++i) {
        if (up[node][i - 1] != -1)
            up[node][i] = up[up[node][i - 1]][i - 1];
        else
            up[node][i] = -1;
    }

    prefixXor[node] = prefixXor[parent] ^ a[node];
    prefixSum[node] = prefixSum[parent] + (a[node] ^ depth[node]);

    for (int child : tree[node]) {
        if (child != parent) {
            depth[child] = depth[node] + 1;
            dfs(child, node);
        }
    }
}

int lca(int u, int v) {
    if (depth[u] < depth[v])
        swap(u, v);

    int diff = depth[u] - depth[v];
    for (int i = 0; i < LOG; ++i) {
        if ((diff >> i) & 1)
            u = up[u][i];
    }

    if (u == v)
        return u;

    for (int i = LOG - 1; i >= 0; --i) {
        if (up[u][i] != up[v][i]) {
            u = up[u][i];
            v = up[v][i];
        }
    }

    return up[u][0];
}

long long query(int x, int y) {
    int lcaNode = lca(x, y);
    return prefixSum[x] + prefixSum[y] - 2 * prefixSum[lcaNode] + (a[lcaNode] ^ depth[lcaNode]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        buildTree(n);

        memset(up, -1, sizeof(up));
        dfs(1, 0);

        int q;
        cin >> q;

        while (q--) {
            int x, y;
            cin >> x >> y;
            cout << query(x, y) << "\n";
        }
    }

    return 0;
}
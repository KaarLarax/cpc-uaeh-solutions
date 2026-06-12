#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using vi = vector<ll>;

#define sz(x) int(x.size())
#define fi first
#define se second
#define pb emplace_back
#define edl '\n'

constexpr long long LLINF = 2e18;
constexpr int INF = 2e9;
constexpr int MOD = 1e9 + 7;
constexpr int MxN = 2e5 + 5;
constexpr int dx[8] = {1, 0, -1, 0, 1, -1, 1, -1}, dy[8] = {0, 1, 0, -1, 1, -1, -1, 1};


int arr[802][802];
bool visitado[802][802];

int bfs(int x, int y, int n) {
    int ans, levelactual;
    queue<pair<int, int>> q;
    q.emplace(x, y);
    visitado[x][y] = true;
    bool orden = arr[x][y] == 1;
    ans = arr[x][y];
    while (!q.empty()) {
        pair<int, int> nodo = q.front();
        levelactual = arr[nodo.fi][nodo.se];
        q.pop();
        for (int i = 0; i < 8; ++i) {
            int tempx = nodo.fi + dx[i], tempy = nodo.se + dy[i];
            if (!visitado[tempx][tempy] && tempx <= n && tempy <= n && tempx > 0 && tempy > 0) {
                if (levelactual + (orden ? 1 : -1) != arr[tempx][tempy]) {
                    return -1;
                }
                visitado[tempx][tempy] = true;
                q.emplace(tempx, tempy);
            }
        }
        if (orden) {
            ans = arr[nodo.fi][nodo.se];
        }
    }
    return ans;
}
void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> arr[i][j];
        }
    }
    int centro = ceil((float) n / 2.00f);
    cout << bfs(centro, centro, n) << edl;
}

int main() {
    // freopen("text.in", "r", stdin);
    // freopen("text.out", "w", stdout);
    // Fast I/O Setup
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int q = 1;
    // cin >> q;
    while (q--) {
        solve();
    }
    return 0;
}

// By KaarLarax
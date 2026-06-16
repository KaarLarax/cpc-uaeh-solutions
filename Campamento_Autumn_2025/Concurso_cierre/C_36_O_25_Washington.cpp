// #pragma GCC optimize("Ofast,unroll-loops,no-stack-protector")

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vll = vector<ll>;
using ii = pair<int, int>;
using vii = vector<ii>;
using vvll = vector<vll>;
using vc = vector<char>;
using vvc = vector<vc>;
using vi = vector<int>;
using vvi = vector<vi>;

#define sz(x) int(x.size())
#define fi first
#define se second
#define pb emplace_back
#define edl '\n'
#define vsCode cout << flush, system("Pause")

constexpr long long LLINF = 2e18;
constexpr int INF = 2e9;
constexpr int MOD = 1e9 + 7;
constexpr int MxN = 1e3 + 5;
constexpr int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vvc grid(n, vc(m, 0));
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vvi distance(n, vi(m));
    queue<ii> source;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'T') {
                visited[i][j] = true;
                source.push({i, j});
            }
        }
    }

    while(!source.empty()) {
        pair<int, int> point = source.front();
        source.pop();
        for (int i = 0; i < 4; i++) {
            int x = point.fi + dx[i];
            int y = point.se + dy[i];
            if (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] != '#' && !visited[x][y]) {
                distance[x][y] = distance[point.fi][point.se] + 1;
                source.emplace(x, y);
                visited[x][y] = true;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'C' && distance[i][j] <= k && distance[i][j]) {
                ans++;
            }
        }
    }
    cout << ans << edl;
}

int main() {
    // freopen("text.in", "r", stdin);
    // freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(false), cin.tie(nullptr); // Fast I/O Setup
    int q = 1;
    // cin >> q;
    while (q--) {
        solve();
    }
    // vsCode;
    return 0;
}
// By KaarLarax
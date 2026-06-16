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
    vi tree(n + 5, 0);
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        tree[l]++;
        tree[r + 1]--;
    }
    for (int i = 1; i <= n; i++) {
        tree[i] += tree[i - 1];
    }

    int tmp = 0, ans = 0;
    for (int i = 1; i <= n; i++) {
        if (tree[i]) {
            tmp = 0;
            continue;
        }
        tmp++;
        ans = max(ans, tmp);
    }
    cout << (ans >= k ? "SI" : "NO") << edl;
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
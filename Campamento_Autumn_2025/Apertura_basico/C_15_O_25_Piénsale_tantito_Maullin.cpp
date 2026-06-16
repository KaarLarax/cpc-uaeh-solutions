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

// bool vis(const vector<bool>& visited) {
//     for (const auto& i: visited) {
//         if (!i) {
//             return false;
//         }
//     }
//     return true;
// }

// ll recur(int j,const vi& arr, vector<bool> visited, const int& n) {
//     visited[j] = true;
//     if (vis(visited)) {
//         return 0;
//     }
//     ll ans = LLINF;
//     for (int i = 0; i < n; i++) {
//         if (visited[i]) {
//             continue;
//         }
//         ans = min( abs(arr[i] - arr[j]) + recur(i, arr, visited, n), ans);
//     }
//     return ans;
// }
//
// void solve() {
//     int n;
//     cin >> n;
//     vi arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     vector<bool> visited(n, false);
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << ' ' << recur(i, arr, visited, n) << edl;
//     }
// }

void solve() {
    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    unordered_map<int, ll> ans;
    // for (int i = 0; i < n; i++) {
    //     ll tmp = 1ll * (arr[i] - arr[0]) + (i <= n - 2 ? (arr[i + 1] - arr[0]) + (arr[n - 1] - arr[i + 1]): 0);
    //     ll aux = 1ll * (arr[n - 1] - arr[i]) + (arr[n - 1] - arr[0]);
    //     ans[arr[i]] = min(tmp, aux);
    //     // cout << arr[i] << ' ' <<  min(tmp, aux) << edl;
    // }
    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        auto val = upper_bound(arr.begin(), arr.end(), x);
        ll tmp = 1ll * (x - arr[0]) + (x < arr[n - 1] ? (*val - arr[0]) + (arr[n - 1] - *val): 0);
        ll aux = 1ll * (arr[n - 1] - x) + (arr[n - 1] - arr[0]);
        cout << min(tmp, aux) << edl;
    }
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
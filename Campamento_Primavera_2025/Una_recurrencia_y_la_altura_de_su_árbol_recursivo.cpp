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

ll f(ll n, ll &altura) {
    if (n <= 5) {
        altura = 1;
        return 1;
    } else {
        ll term1, alturaTerm1;
        ll term2, alturaTerm2;

        term1 = f(n - 5, alturaTerm1);
        term2 = f(floor(3 * n / 4), alturaTerm2);

        altura = max(alturaTerm1, alturaTerm2) + 1;
        return term1 + term2;
    }
}

void solve() {
    ll n;
    cin >> n;
    ll altura;
    ll resultado = f(n, altura);

    cout << resultado << ' ' << altura << edl;
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
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
constexpr int MxN = 1e6 + 5;
constexpr int dx[8] = {1, 0, -1, 0}, dy[8] = {0, 1, 0, -1};

bool primes[MxN + 1];

int arr[MxN + 1];

void sieve() {
    for (int i = 2; i * i <= MxN; ++i) {
        if (!primes[i]) {
            for (int j = i + i; j <= MxN; j += i) {
                primes[j] = true;
            }
        }
    }
    for (int i = 2; i <= MxN; ++i) {
        arr[i] += arr[i - 1];
        if (!primes[i]) {
            arr[i]++;
        }
    }
}

void solve() {
    sieve();
    int n;
    cin >> n;
    while (n--) {
        ull l, r;
        cin >> l >> r;
        int r1 = sqrt(r), l1= ceil(sqrt(l)) - 1;
        cout << arr[r1] - arr[l1] << edl;
    }
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
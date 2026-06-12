// BY KaarLarax
// https://codeforces.com/profile/DarkoLaraSlowed
// https://github.com/KaarLarax
// https://www.youtube.com/@KaarLarax

#include <bits/stdc++.h>

// Namespaces
using namespace std;

// Typedefs
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int, int>;
using pll = pair<long long, long long>;
using vii = vector<pii>;
using vvi = vector<vi>;
using vvll = vector<vll>;

// Macros
#define debug(x) cerr << #x << " = " << x << '\n'
#define mp make_pair
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fi first
#define se second
#define pb emplace_back
#define edl '\n'

// Utility Functions
template<typename T>
T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T>
T lcm(T a, T b) { return a / gcd(a, b) * b; }
template<typename T>
void debug_vector(vector<T> &v) {
    cerr << "[ ";
    for (T &x: v) cerr << x << " ";
    cerr << "]" << edl;
}

// Constants
constexpr int64_t LLINF = 2e18;
constexpr int INF = 2e9;
constexpr int MOD = 1e9 + 7;
constexpr int MxN = 1e6 + 5;
constexpr array<int, 4> dx{1, 0, -1, 0};
constexpr array<int, 4> dy{0, 1, 0, -1};
vi cubeta[MxN];
int cubetas[MxN];
// Main funtion
int32_t main() {
    // Fast I/O Setup
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int aux;
        cin >> aux;
        cubeta[cubetas[aux]].pb(aux);
        cubetas[aux]++;
    }
    for (int i = 0; i < MxN; ++i) {
        if (sz(cubeta[i])) {
            sort(cubeta[i].begin(), cubeta[i].end());
            for (int j = 0; j < sz(cubeta[i]); ++j) {
                cout << cubeta[i][j] << ' ';
            }
        }
    }
    cout << edl;
    return 0;
}
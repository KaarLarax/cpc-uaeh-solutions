// BY LARA 1424
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
// Macros para iteraciones
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define repr(i, a, b) for (int i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)
// Utility Functions
template <typename T>
T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template <typename T>
T lcm(T a, T b) { return a / gcd(a, b) * b; }
// Constants
constexpr int64_t LLINF = 2e18;
constexpr int INF = 2e9;
constexpr int MOD = 1e9 + 7;
constexpr int MxN = 2e5 + 5;
constexpr array<int, 4> dx{1, 0, -1, 0};
constexpr array<int, 4> dy{0, 1, 0, -1};
// Funciones de entrada/salida
template <typename T>
void read(vector<T> &v) {
    for (T &x : v)
        cin >> x;
}
template <typename T>
void write_vector(const vector<T> &v) {
    for (const T &x : v)
        cout << x << ' ';
    cout << '\n';
}
// vvi posibilidades(10);

// Main funtion
int32_t main() {
    // Fast I/O Setup
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    //    posibilidades[0] = {0};
    //    posibilidades[1] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    //    posibilidades[2] = {2, 3, 5, 8, 0, 6, 9};
    //    posibilidades[3] = {3, 6, 9};
    //    posibilidades[4] = {4, 5, 6, 7, 8, 9, 0};
    //    posibilidades[5] = {5, 6, 8, 9, 0};
    //    posibilidades[6] = {6, 9};
    //    posibilidades[7] = {7, 8, 9, 0};
    //    posibilidades[8] = {8, 9, 0};
    //    posibilidades[9] = {9};
    ll a, b;
    cin >> a >> b;
    cout << 1ll * a + 1ll * b << edl;

    return 0;
}
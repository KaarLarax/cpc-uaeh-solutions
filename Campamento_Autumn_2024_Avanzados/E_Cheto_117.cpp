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
    int n, m;
    if (!(cin >> n >> m))
        return;

    vi hoteles(n);
    for (int i = 0; i < n; ++i) {
        cin >> hoteles[i];
    }

    int block_size = ceil(sqrt(n));
    int num_blocks = (n + block_size - 1) / block_size;

    vi block_max(num_blocks, 0);

    for (int i = 0; i < n; ++i) {
        int block_idx = i / block_size;
        block_max[block_idx] = max(block_max[block_idx], hoteles[i]);
    }

    for (int q = 0; q < m; ++q) {
        int habitaciones_requeridas;
        cin >> habitaciones_requeridas;

        int hotel_encontrado = -1;
        int bloque_objetivo = -1;

        for (int b = 0; b < num_blocks; ++b) {
            if (block_max[b] >= habitaciones_requeridas) {
                bloque_objetivo = b;
                break;
            }
        }

        if (bloque_objetivo != -1) {
            int start_idx = bloque_objetivo * block_size;
            int end_idx = min(n, start_idx + block_size);

            for (int i = start_idx; i < end_idx; ++i) {
                if (hoteles[i] >= habitaciones_requeridas) {
                    hotel_encontrado = i;
                    break;
                }
            }

            if (hotel_encontrado != -1) {
                hoteles[hotel_encontrado] -= habitaciones_requeridas;

                int nuevo_maximo = 0;
                for (int i = start_idx; i < end_idx; ++i) {
                    nuevo_maximo = max(nuevo_maximo, hoteles[i]);
                }
                block_max[bloque_objetivo] = nuevo_maximo;
            }
        }

        cout << (hotel_encontrado == -1 ? 0 : hotel_encontrado + 1) << " ";
    }
    cout << edl;
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
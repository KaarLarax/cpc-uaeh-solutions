#include <bits/stdc++.h>

#define ll long long
#define edl '\n'
#define sz(x) (int) x.size()
#define ritera(x) x.rbegin(), x.rend()
#define itera(x) x.begin(), x.end()

using namespace std;


ll cubeta[1000005];

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    ll n, aux, q;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i) {
        cin >> aux;
        if (aux % 2 == 0) {
            cubeta[i]++;
        }
        cubeta[i] += cubeta[i - 1];
    }
    ll x, y;
    while (q--) {
        cin >> x >> y;
        cout << cubeta[y] - cubeta[x - 1] << edl;
    }
    return 0;
}
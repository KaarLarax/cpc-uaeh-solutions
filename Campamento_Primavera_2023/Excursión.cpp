#include <bits/stdc++.h>

#define ll long long
#define edl '\n'
#define sz(x) (int) x.size()
#define ritera(x) x.rbegin(), x.rend()
#define itera(x) x.begin(), x.end()

using namespace std;

ll matriz[100005];

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    ll n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i) {
        cin >> matriz[i];
    }
    ll aux;
    while(q--) {
        cin >> aux;
        cout << matriz[aux] << edl;
    }

    return 0;
}
// #pragma GCC optimize("Ofast,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;

using vc = vector<char>;
using vvc = vector<vc>;
using vb = vector<char>;
using vvb = vector<vb>;

constexpr int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
constexpr int ddx[4] = {1, -1, 1, -1}, ddy[4] = {1, -1, -1, 1};

int n, m;

void dfs_iter(int sx, int sy, vvc &arr, vvb &visited, vvb &ans) {
    if (sx < 0 || sx >= n || sy < 0 || sy >= m)
        return;
    if (arr[sx][sy] != '.')
        return;

    vector<pair<int, int>> st;
    st.emplace_back(sx, sy);
    visited[sx][sy] = 1;

    while (!st.empty()) {
        auto [x, y] = st.back();
        st.pop_back();
        ans[x][y] = 1;

        for (int k = 0; k < 4; ++k) {
            int nx = x + dx[k], ny = y + dy[k];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            if (visited[nx][ny])
                continue;
            if (arr[nx][ny] != '.')
                continue;
            visited[nx][ny] = 1;
            st.emplace_back(nx, ny);
        }

        for (int k = 0; k < 4; ++k) {
            int nx = x + ddx[k], ny = y + ddy[k];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            if (arr[nx][y] == '*' || arr[x][ny] == '*')
                continue;
            if (visited[nx][ny])
                continue;
            if (arr[nx][ny] != '.')
                continue;
            visited[nx][ny] = 1;
            st.emplace_back(nx, ny);
        }
    }
}

void solve() {
    int q;
    cin >> n >> m >> q;
    vvc arr(n, vc(m));
    vvb visited(n, vb(m, 0)), ans(n, vb(m, 0));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> arr[i][j];
    if (arr[n - 1][m - 1] == '.')
        dfs_iter(n - 1, m - 1, arr, visited, ans);

    while (q--) {
        int x, y;
        cin >> x >> y;
        --x;
        --y;
        if (x < 0 || x >= n || y < 0 || y >= m) {
            cout << "LoL Que Mal\n";
            continue;
        }
        if (arr[x][y] != '.' || arr[n - 1][m - 1] != '.') {
            cout << "LoL Que Mal\n";
        } else {
            cout << (ans[x][y] ? "Corre Maullin\n" : "LoL Que Mal\n");
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
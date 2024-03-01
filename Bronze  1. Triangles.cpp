// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    pair<char, int> a[t];
    for (int i = 0; i < t; ++i) {
        cin >> a[i].first >> a[i].second;
    }
    int ans = t;
    for (int i = 0; i < t; ++i) {
        int liars = 0;
        for (int j = 0; j < t; ++j)
            if ((a[j].first == 'L' && a[i].second > a[j].second) ||
                (a[j].first == 'G' && a[i].second < a[j].second))
                liars++;

        ans = min(ans, liars);
    }
    cout << ans;


}

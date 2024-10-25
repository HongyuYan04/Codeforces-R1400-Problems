#include <bits/stdc++.h>

using u32 = unsigned;
using i64 = long long;
using u64 = unsigned long long;

void solve() {
    i64 b, c, d;
    std::cin >> b >> c >> d;

    i64 ans = 0;
    for (int i = 0; i <= 60; i++) {
        auto check = [&](int v) {
            return int(v | (b >> i & 1)) - int(v & (c >> i & 1)) == int(d >> i & 1);
        };
        if (!check(0)) {
            if (check(1)) {
                ans |= i64(1) << i;
            } else {
                ans = -1;
                break;
            }
        }
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

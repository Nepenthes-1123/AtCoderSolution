#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a.at((k + i) % n);
    }

    for (int i = 0; i < n; ++i) {
        cout << a.at(i) << " ";
    }
    cout << endl;

    return 0;
}

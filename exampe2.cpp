#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int m, n, k;
    cin >> n >> m >> k;
    vector <int> a1(n);
    vector <int> a2(m);
    pair <int, int> res;

    for (int i = 0; i < n; i++) {
        cin >> a1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> a2[i];
    }
    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());
    reverse(a2.begin(), a2.end());


    int i = 0, j = 0;
    while (i < n || j < m) {
        if (a1[i] + a2[j] > k)
            j++;
        if (a1[i] + a2[j] < k)
            i++;
        if (a1[i] + a2[j] == k) {
            res.first = a1[i];
            res.second = a2[j];
        }
    }
    cout << res.first << ' ' << res.second;
    return 0;
}

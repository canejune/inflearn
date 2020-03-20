#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    freopen("input/42.inp", "rt", stdin);

    int n, m, i;

    cin >> n >> m;
    vector<int> a(n, 0);

    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (auto it = a.begin(); it != a.end(); ++it) {
        cout << *it << " ";
    }

    cout << endl;

    int lt, rt, mid;

    lt = 0;
    rt = n - 1;

    while (lt <= rt) {
        mid = (lt + rt) / 2;

        cout << lt << " " << rt << " " << mid << endl;

        if (a[mid] == m) {
            cout << mid + 1 << endl;
            return 0;
        }
        else if (a[mid] > m) {
            rt = mid - 1;
        }
        else {
            lt = mid + 1;
        }
    }
    cout << "not found" << endl;

    return 0;
}
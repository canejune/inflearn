#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    freopen("input/36.inp", "rt", stdin);

    int n, i, j, tmp;

    cin >> n;

    vector<int> a(n);

    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 1; i < n; i++) {
        tmp = a[i];
        for (j = i - 1; j >=0; j--) {
            if (tmp < a[j]) a[j+1] = a[j];
            else break;
        }
        a[j+1] = tmp;
    }

    for (auto it = a.begin(); it != a.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
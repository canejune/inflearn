#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    freopen("input/40.inp", "rt", stdin);

    int an, bn, i, ai, bi;

    cin >> an;
    vector<int> a(an, 0);
    for (i = 0; i < an; i++) cin >> a[i];

    cin >> bn;
    vector<int> b(bn, 0);
    for (i = 0; i < bn; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> r;
    for (ai = 0, bi = 0; ai < an && bi < bn; ) {
        if (a[ai] == b[bi]) {
            r.push_back(a[ai]);
            ai++;
            bi++;
        } else if (a[ai] < b[bi]) ai++;
        else bi++;
    }

    for (auto it = a.begin(); it != a.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    for (auto it = b.begin(); it != b.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    for (auto it = r.begin(); it != r.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;


    return 0;
}
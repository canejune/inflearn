#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    freopen("input/37.inp", "rt", stdin);

    int cn, in, jn, i, j;

    cin >> cn >> in;

    vector<int> a(cn, 0);

    for (i = 0; i < in; i++) {
        cin >> jn;

        for (j = 0; j < cn; j++) {
            if (a[j] == 0 || jn == a[j]) {
                break;
            }
        }
        for (;j >= 1; j--) {
            a[j] = a[j - 1];
        }
        a[0] = jn;
        for (auto it = a.begin(); it != a.end(); ++it) {
            cout << *it << " ";
        }
        cout << endl;
    }

    for (auto it = a.begin(); it != a.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
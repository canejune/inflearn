#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool order(int i, int j) { return (j < i); }

int main(void)
{
    // freopen("input/33.inp", "rt", stdin);

    int n, i;

    cin >> n;

    vector<int> a(n);

    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), order);

    // for (auto it = a.begin(); it != a.end(); ++it) {
    //     cout << *it << " ";
    // }
    // cout << endl;

    int cnt = 0;
    int cs = *a.begin();
    for (vector<int>::iterator it = a.begin() + 1; it != a.end(); ++it) {
        if (cs != *it) {
            ++cnt;
            cs = *it;
        }
        if (cnt == 2) { 
            cout << *it;
            break;
        }
    }

    return 0;
}
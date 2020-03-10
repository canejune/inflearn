#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    //freopen("24.inp", "rt", stdin);
    int n, i, now, pre, pos;

    cin >> n;

    vector<int> ch(n);

    cin >> pre;
    for (i = 1; i <n; i++) {
        cin >> now;
        pos = abs(pre - now);
        if (pos > 0 && pos < n && ch[pos] == 0) ch[pos] = 1;
        else {
            cout << "NO" << endl;
            return 0;
        }
        pre = now;
    }
    cout << "YES" << endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
    int n, i, j, tmp;
    cin >> n;

    vector<int> a(n + 1, 0);

    for (i = 2; i <= n; i++) {
        tmp = i;
        for (j = 2; j <= tmp;) {
            if (tmp % j == 0) {
                a[j]++;
                tmp /= j;
            }
            else j++;
        }
    }
    for (i = 2; i <= n; i++) {
        if (a[i]) cout << a[i] << " ";
    }
    cout << endl;
}
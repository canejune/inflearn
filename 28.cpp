#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
    int n, i, j, tmp, cnt2 = 0, cnt5 = 0;
    cin >> n;

    for (i = 2; i <= n; i++) {
        tmp = i;
        for (j = 2; j <= tmp;) {
            if (tmp % j == 0) {
                tmp /= j;
                if (j == 2) cnt2++;
                else if (j == 5) cnt5++;
            }
            else j++;
        }
    }

    cout << (cnt2 < cnt5 ? cnt2 : cnt5) << endl;

    return 0;
}
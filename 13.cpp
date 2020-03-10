#include <iostream>

using namespace std;

int reverse(int x)
{
    int res = 0;
    int tmp;
    while(x > 0) {
        tmp = x % 10;
        res = res * 10 + tmp;
        x = x / 10;
    }
    return res;
}

bool isPrime(int x)
{
    if (x == 1) return false;
    for (int i = 2; i*i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main(void)
{
    int n, num, i, tmp;

    freopen("13.input", "rt", stdin);

    cin >> n;

    for (i = 1; i <= n; i++) {
        cin >> num;
        tmp = reverse(num);
        if (isPrime(tmp))
            cout << tmp << " ";
    }

    cout << endl;
    return 0;
}
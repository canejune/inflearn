#include <iostream>
#include <vector>
using namespace std;

void D(int i, int l, vector<int> v)
{
    if (i > l) {
        if (!v.empty()) {
            for (auto e : v) {
                cout << e << " ";
            }
            cout << endl;
        }
        return;
    }

    v.push_back(i);
    D(i + 1, l, v);
    v.pop_back();
    D(i + 1, l, v);
}

int main(void)
{
    int n;
    cin >> n;
    vector<int> v;
    D(1, n, v);
    return 0;
}
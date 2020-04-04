#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main(void)
{
    int n, in, eout = 0;

    freopen("input/55.inp", "rt", stdin);

    cin >> n;
    stack<int> s;

    for(int i =0; i < n; i++)
    {
        if (!s.empty() && s.top() == eout)
        {
            eout++;
            s.pop();
            cout << "O" << " ";
        }
        else
        {
            cin >> in;
            s.push(in);
            cout << "P" << " ";
        }
    }

    if (!s.empty())
        cout << "impossible";

    cout << endl;

    return 0;
}

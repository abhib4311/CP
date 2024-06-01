#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;

        cin >> n;

        vector<int> a1(n);
        vector<int> a2(n + 1);

        for (int i = 0; i < n; ++i)
        {
            cin >> a1[i];
        }

        for (int i = 0; i < n + 1; ++i)
        {
            cin >> a2[i];
        }

        int sum = 0;
        int d = abs(a1[0] - a2.back());
        for (int i = 0; i < n; ++i)
        {
            if (a2.back() >)
            {
                /* code */
            }

            sum += abs(a1[i] - a2[i]);
            int df = abs(a1[i] - a2.back());
            if (df < d)
                d = df;
        }
        cout << sum + d + 1;
    }
    return 0;
}

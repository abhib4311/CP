#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, f, k;
        cin >> n >> f >> k;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        f = a[f - 1];

        sort(a.begin(), a.end(), greater<int>());

        int count_f = count(a.begin(), a.begin() + k, f);
        int count_g = count(a.begin() + k, a.end(), f);

        if (count_f == 0)
        {
            cout << "NO" << endl;
        }
        else if (count_g == 0)
        {
            cout << "YES" << endl;
        }
        else if (count_f != 0 && count_g != 0)
        {
            cout << "MAYBE" << endl;
        }
    }

    return 0;
}

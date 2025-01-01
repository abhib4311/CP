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
        vector<int> v(n);
        set<int> st;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            int mx = v[i];

            for (int j = i + 1; j < n; j++)
            {
                mx = max(mx, v[j]);
                st.insert(mx);
            }
        }

        cout << (*st.begin()) - 1 << endl;
    }

    return 0;
}

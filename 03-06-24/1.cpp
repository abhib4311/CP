#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        string s;
        cin >> n >> m >> s;
        map<char, int> freq;
        int sun = 0;
        for (int i = 0; i < n; i++)
        {
            if (freq.count(s[i]))
            {

                freq[s[i]]++;
            }
            else
            {

                freq[s[i]] = 1;
            }
            if (freq[s[i]] > m)
            {
                freq[s[i]] = m;
            }
        }
        for (const auto &entry : freq)
            sun += entry.second;
        cout << (7 * m) - sun << endl;
    }

    return 0;
}

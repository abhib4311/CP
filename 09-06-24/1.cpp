#include <iostream>
#include <vector>
#include <set>
#include <string>

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
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        set<int> unique_elements(v.begin(), v.end());
        if (unique_elements.size() == 1 && n > 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

            string s(n, 'B');

            s[1] = 'R';

            cout << s << endl;
        }
    }

    return 0;
}

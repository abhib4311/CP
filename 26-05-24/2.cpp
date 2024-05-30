#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        vector<int> a;
        while (x != 0)
        {

            if (x % 2 != 0)
            {
                if (x % 4 == 1)
                {
                    a.push_back(1);
                    x -= 1;
                }
                else
                {
                    a.push_back(-1);
                    x += 1;
                }
            }
            else
            {
                a.push_back(0);
            }
            x /= 2;
        }
        cout << a.size() << endl;
        for (int i = 0; i < a.size(); i++)
            cout << a[i] << " ";

        cout << endl;
    }

    return 0;
}

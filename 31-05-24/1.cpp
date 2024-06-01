#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int L, R;
        cin >> L;
        cin >> R;
        int c = 2;
        long int ans = 0;

        while (R >= c)
        {
            c *= 2;
            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}

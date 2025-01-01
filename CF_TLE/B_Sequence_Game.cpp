#include <iostream>
using namespace std;
int a[200005];
int main()
{
    int t, n, cnt;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            cnt += a[i] == 1;
        }
        cout << 2 * n - cnt << endl;
        for (int i = 1; i <= n; i++)
            cout << a[i] << (a[i] != 1 ? " 1 " : " ");
        cout << endl;
    }
}
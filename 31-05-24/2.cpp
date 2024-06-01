#include <iostream>
#include <vector>
using namespace std;
const int MAX_SIZE = 100000000;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(MAX_SIZE);
        vector<int> vf(MAX_SIZE);
        for (int k = 0; k < MAX_SIZE; k++)
        {
            v[k] = k;
        }
        for (int i = 0; i < m; i++)
        {
            vf[0] = v[0] | v[1];
            vf[MAX_SIZE] = v[MAX_SIZE - 1] | v[MAX_SIZE];
            for (int k = 1; k < MAX_SIZE; k++)
            {
                vf[k] = v[k - 1] | v[k] | v[k + 1];
            }
            v = vf;
        }
        cout << v[n];

        cout << endl;
    }

    return 0;
}

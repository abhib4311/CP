#include <iostream>
#include <vector>

using namespace std;

void generateBeautifulArray(int n)
{
    vector<int> beautifulArray(n);
    for (int i = 1; i <= n; ++i)
    {
        beautifulArray[i - 1] = i; // array elements are [1, 2, 3, ..., n]
    }
    for (int i = 0; i < n; ++i)
    {
        cout << beautifulArray[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        generateBeautifulArray(n);
    }
    return 0;
}

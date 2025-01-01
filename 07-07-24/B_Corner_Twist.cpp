#include "bits/stdc++.h"
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vvb vector<vb>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define rep(i, a, n) for (int i = (a); i <= (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define srt(v) sort(v.begin(), v.end())         // sort
#define mxe(v) *max_element(v.begin(), v.end()) // find max element in vector
#define mne(v) *min_element(v.begin(), v.end()) // find min element in vector
#define unq(v) v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// make sure to sort before applying unique // else only consecutive duplicates would be removed
#define bin(x, y) bitset<y>(x)
using namespace std;
int MOD = 1e9 + 7; // Hardcoded, directly change from here for functions!

void modadd(int &a, int b) { a = ((a % MOD) + (b % MOD)) % MOD; }
void modsub(int &a, int b) { a = ((a % MOD) - (b % MOD) + MOD) % MOD; }
void modmul(int &a, int b) { a = ((a % MOD) * (b % MOD)) % MOD; }
// ================================== take ip/op like vector,pairs directly!==================================
template <typename typC, typename typD>
istream &operator>>(istream &cin, pair<typC, typD> &a) { return cin >> a.first >> a.second; }
template <typename typC>
istream &operator>>(istream &cin, vector<typC> &a)
{
    for (auto &x : a)
        cin >> x;
    return cin;
}
template <typename typC, typename typD>
ostream &operator<<(ostream &cout, const pair<typC, typD> &a) { return cout << a.first << ' ' << a.second; }
template <typename typC, typename typD>
ostream &operator<<(ostream &cout, const vector<pair<typC, typD>> &a)
{
    for (auto &x : a)
        cout << x << '\n';
    return cout;
}
template <typename typC>
ostream &operator<<(ostream &cout, const vector<typC> &a)
{
    int n = a.size();
    if (!n)
        return cout;
    cout << a[0];
    for (int i = 1; i < n; i++)
        cout << ' ' << a[i];
    return cout;
}
// ===================================END Of the input module ==========================================

bool canTransform(vector<vector<int>> &gridA, vector<vector<int>> &gridB, int rows, int cols)
{
    for (int row = rows - 1; row >= 1; --row)
    {
        for (int col = cols - 1; col >= 1; --col)
        {
            if (gridA[row][col] != gridB[row][col])
            {
                int diff = (gridB[row][col] - gridA[row][col] + 3) % 3;
                gridA[row][col] = gridB[row][col];
                gridA[row - 1][col] = (gridA[row - 1][col] + 2 * diff) % 3;
                gridA[row][col - 1] = (gridA[row][col - 1] + 2 * diff) % 3;
                gridA[row - 1][col - 1] = (gridA[row - 1][col - 1] + diff) % 3;
            }
        }
    }
    for (int row = 0; row < rows; ++row)
    {
        if (gridA[row][0] != gridB[row][0])
            return false;
    }
    for (int col = 0; col < cols; ++col)
    {
        if (gridA[0][col] != gridB[0][col])
            return false;
    }
    return true;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {

        int rows, cols;
        cin >> rows >> cols;

        vector<vector<int>> gridA(rows, vector<int>(cols));
        vector<vector<int>> gridB(rows, vector<int>(cols));

        for (int row = 0; row < rows; ++row)
        {
            for (int col = 0; col < cols; ++col)
            {
                char value;
                cin >> value;
                gridA[row][col] = value - '0';
            }
        }

        for (int row = 0; row < rows; ++row)
        {
            for (int col = 0; col < cols; ++col)
            {
                char value;
                cin >> value;
                gridB[row][col] = value - '0';
            }
        }

        if (canTransform(gridA, gridB, rows, cols))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

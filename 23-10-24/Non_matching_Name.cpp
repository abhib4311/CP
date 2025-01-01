#include "bits/stdc++.h"
#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define all(v) v.begin(), v.end()
using namespace std;

int MOD = 1e9 + 7; // Modulus value

void modadd(int &a, int b) { a = ((a % MOD) + (b % MOD)) % MOD; }
void modsub(int &a, int b) { a = ((a % MOD) - (b % MOD) + MOD) % MOD; }
void modmul(int &a, int b) { a = ((a % MOD) * (b % MOD)) % MOD; }

// Overloading input/output for pairs and vectors
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
    for (const auto &x : a)
        cout << x << '\n';
    return cout;
}
template <typename typC>
ostream &operator<<(ostream &cout, const vector<typC> &a)
{
    if (a.empty())
        return cout;
    cout << a[0];
    for (int i = 1; i < a.size(); i++)
        cout << ' ' << a[i];
    return cout;
}

// The main solve function
void solve()
{
    int N, M;
    cin >> N >> M;
    string SA, SB;
    cin >> SA >> SB;

    // Convert the strings to sets of characters
    set<char> setA(all(SA));
    set<char> setB(all(SB));

    // Check if there is any common character
    bool hasCommon = false;
    for (char c : setA)
    {
        if (setB.find(c) != setB.end()) // Check if character 'c' from setA is in setB
        {
            hasCommon = true;
            break; // Exit the loop if a common character is found
        }
    }

    // Change the output logic to fit the problem requirements
    cout << (hasCommon ? "YES" : "NO") << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}

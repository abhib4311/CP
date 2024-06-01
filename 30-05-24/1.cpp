#include <iostream>
#include <vector>
#include <algorithm> // for sort function
using namespace std;

int main() { int t;
cin>>t;
while(t--){
    int a;
    string input;
    cin >>a>> input;
    vector<char> chars(input.begin(), input.end());
    sort(chars.begin(), chars.end());
    string sortedString(chars.begin(), chars.end());

    if (sortedString == input) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
    return 0;
}

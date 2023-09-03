#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    int freq[6] = {0};
    for (char c : s) {
        if (c == 's') freq[0]++;
        else if (c == 'h') freq[1]++;
        else if (c == 'e') freq[2]++;
        else if (c == 'r') freq[3]++;
        else if (c == 'i') freq[4]++;
        else if (c == 'f') freq[5]++;
    }
    int ans = min({freq[0], freq[1], freq[2], freq[3], freq[4], freq[5] / 2});
    cout << ans << endl;
    return 0;
}
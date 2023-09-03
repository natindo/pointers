#include <iostream>
#include <vector>
#include <string>
//#define DEBUG
using namespace std;

// class Solution {
// public:
//     int longestPalindrome(string s) {
//         int ans = 0;
//         bool isOne = false;
//         bool isOnlyOne = false;
//         int ascii[60] = {0};

//         for (auto c : s) {
//             ascii[(int(c) - 65)]++;
//         }

//         for (auto i : ascii) {
//             if ((i == 1) && (isOne == false)) {
//                 ans++;
//                 isOne = true;
//             }
//             if (i % 2 == 0) {
//                 ans += i;
//             }
//         }
//         return ans;
//     }
// };

int main () {

//     string s = "abccccdd";
//     int ans = 0;
//     bool isOne = false;
//     int ascii[60] = {0};
    
//     for (auto c : s) {
//         ascii[(int(c) - 65)]++;
//     }

//     for (auto i : ascii) {
//         if ((i == 1) && (isOne == false)) {
//             ans++;
//             isOne = true;
//         }
//         if (i % 2 == 0) {
//             ans += i;
//         }
//     }
//     cout << ans;


// #ifdef DEBAG
//     for (size_t i = 0; i < 60; i++) {
//         cout << ascii[i];
//     }
// #endif

    int a, b;
    std::cin >> a >> b;
    cout << a + b;
}
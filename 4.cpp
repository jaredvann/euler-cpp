/*
Project Euler Problem 4:

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    int l = 0, z;
    string s1, s2;

    for (int x = 0; x < 1000; x++) {
        for (int y = 0; y < 1000; y++) {
            z = x * y;

            s1 = to_string(z);
            s2 = s1;
            reverse(s1.begin(), s1.end());

            if (s1 == s2 && z > l) {
                l = z;
            }
        }
    }

    cout << l << '\n';
}

// Answer = 906609

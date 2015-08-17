/*
Project Euler Problem 9:

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {
    float c;

    for (int a = 1; a < 1000; a++) {
        for (int b = 1; b < 1000; b++) {
            c = sqrt(a*a + b*b);
            if (a+b+c == 1000) {
                cout << int(a*b*c) << '\n';
                return 0;
            }
        }
    }
}

// Answer = 31875000

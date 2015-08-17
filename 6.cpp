/*
Project Euler Problem 6:

The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int sum1 = 0, sum2 = 0;

    for (int i = 1; i <= 100; i++) {
        sum1 += i*i;
        sum2 += i;
    }

    cout << sum2*sum2 - sum1 << '\n';
}

// Answer = 25164150

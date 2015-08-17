/*
Project Euler Problem 7:

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long x) {
    for (long i = 2; i <= ceil(sqrt(x)); i++) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

int main(int argc, char const *argv[]) {
    int i = 1, n = 0;

    while (true) {
        if (isPrime(i)) {
            n++;
            if (n == 10001) {
                cout << i << '\n';
                return 0;
            }
        }
        i++;
    }
}

// Answer = 104743

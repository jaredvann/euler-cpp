/*
Project Euler Problem 3:

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
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
    long x = 600851475143;

    for (long i = ceil(sqrt(x)); i>1; i--) {
        if (x % i == 0 && isPrime(i)) {
            cout << i << '\n';
            return 0;
        }
    }
}

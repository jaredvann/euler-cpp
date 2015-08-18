/*
Project Euler Problem 10:

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
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
    long sum = 1;

    for (int i = 1; i <= 2000000; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }

    cout << sum << '\n';
    return 0;
}

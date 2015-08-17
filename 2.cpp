/*
Project Euler Problem 2:

Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int i = 1, j = 1, k, sum = 0;

    while (true) {
        k = i;
        i = i + j;
        j = k;

        if (i > 4000000) {
            break;
        }

        if (i % 2 == 0) {
            sum += i;
        }
    }

    cout << sum << '\n';
    return 0;
}

// Answer = 4613732

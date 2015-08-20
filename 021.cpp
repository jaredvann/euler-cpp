/*
Project Euler Problem 21:

Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a and b are called amicable numbers.

For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

Evaluate the sum of all the amicable numbers under 10000.
*/

#include <iostream>
#include <cmath>
#include <map>

using namespace std;


int main(int argc, char const *argv[]) {
    int s = 0, t;
    map<int, int> m;

    for (int i = 1; i < 10000; i++) {
        t = 0;

        for (int j = 1; j <= i/2; j++) {
            if (i % j == 0) {
                t += j;
            }
        }

        m[i] = t;
    }

    for (int i = 1; i < 10000; i++) {
        if (i == m[m[i]] && i != m[i]) {
            s += i;
        }
    }

    cout << s << endl;

    return 0;
}

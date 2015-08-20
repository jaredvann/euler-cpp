/*
Project Euler Problem 23:

A perfect number is a number for which the sum of its proper divisors is exactly equal to the number. For example, the sum of the proper divisors of 28 would be 1 + 2 + 4 + 7 + 14 = 28, which means that 28 is a perfect number.

A number n is called deficient if the sum of its proper divisors is less than n and it is called abundant if this sum exceeds n.

As 12 is the smallest abundant number, 1 + 2 + 3 + 4 + 6 = 16, the smallest number that can be written as the sum of two abundant numbers is 24. By mathematical analysis, it can be shown that all integers greater than 28123 can be written as the sum of two abundant numbers. However, this upper limit cannot be reduced any further by analysis even though it is known that the greatest number that cannot be expressed as the sum of two abundant numbers is less than this limit.

Find the sum of all the positive integers which cannot be written as the sum of two abundant numbers.
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


int main(int argc, char const *argv[]) {
    vector<int> a;
    int d, s = 0;

    for (int i = 0; i <= 28123; i++) {
        d = 0;

        for (int j = 1; j <= i/2; j++) {
            if (i % j == 0) {
                d += j;
            }
        }

        if (d > i) {
            a.push_back(i);
        }

        for (int x = 0; x < a.size(); x++) {
            for (int y = 0; y < a.size(); y++) {
                if (a[x] + a[y] == i) {
                    goto b;
                }
            }
        }

        s += i;
        b:
            s = s;
    }

    cout << s << endl;
    return 0;
}

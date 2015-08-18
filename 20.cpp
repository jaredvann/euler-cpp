/*
Project Euler Problem 20:

n! means n × (n − 1) × ... × 3 × 2 × 1

For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

Find the sum of the digits in the number 100!
*/

#include <iostream>

using namespace std;


int main(int argc, char const *argv[]) {
    int r[200] = {0};
    int c, s = 0;
    r[0] = 1;
    for (int i = 1; i <= 100; i++) {
        c = 0;
        for (int j = 0; j < 200; j++) {
            r[j] = r[j] * i + c;
            c = 0;

            while (r[j] > 9) {
                r[j] -= 10;
                c++;
            }
        }
    }

    for (int i = 199; i > 0; i--) {
        s += r[i];
    }

    cout << s << endl;
    return 0;
}

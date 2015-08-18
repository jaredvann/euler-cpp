/*
Project Euler Problem 16:

2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?
*/

#include <iostream>

using namespace std;


int main(int argc, char const *argv[]) {
    int x[1000] = {0};
    int c, s = 0;

    x[0] = 2;

    for (int i = 1; i < 1000; i++) {
        c = 0;
        for (int j = 0; j < 1000; j++) {
            x[j] *= 2;

            x[j] += c;
            c = 0;

            while (x[j] > 9) {
                x[j] -= 10;
                c++;
            }
        }
    }

    for (int k = 0; k < 500; k++) {
        s += x[k];
    }

    cout << s << endl;
    return 0;
}

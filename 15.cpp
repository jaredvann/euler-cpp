/*
Project Euler Problem 15:

Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.

https://projecteuler.net/project/images/p015.gif

How many such routes are there through a 20×20 grid?
*/

#include <iostream>

using namespace std;


int main(int argc, char const *argv[]) {
    int s = 20;
    long n = 1;

    for (int i = 0; i < s; i++) {
        n *= (2 * s) - i;
        n /= i + 1;
    }

    cout << n << endl;
}

// I cheated. :(

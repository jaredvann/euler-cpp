/*
Project Euler Problem 5:

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    for (int i = 1; true; i++) {
        for (int x = 1; x <= 20; x++) {
            if (i % x != 0){
                goto end;
            }
        }

        cout << i << '\n';
        return 0;
        end:
            i=i;
    }
}

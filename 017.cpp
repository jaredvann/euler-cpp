/*
Project Euler Problem 17:

If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?


Note: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters. The use of "and" when writing out numbers is in compliance with British usage.
*/

#include <iostream>

using namespace std;


int main(int argc, char const *argv[]) {
    int _1 = 3;
    int _2 = 3;
    int _3 = 5;
    int _4 = 4;
    int _5 = 4;
    int _6 = 3;
    int _7 = 5;
    int _8 = 5;
    int _9 = 4;
    int _10 = 3;
    int _11 = 6;
    int _12 = 6;
    int _13 = 8;
    int _14 = 8;
    int _15 = 7;
    int _16 = 7;
    int _17 = 9;
    int _18 = 8;
    int _19 = 8;
    int _20 = 6;
    int _30 = 6;
    int _40 = 5;
    int _50 = 5;
    int _60 = 5;
    int _70 = 7;
    int _80 = 6;
    int _90 = 6;
    int _x00 = 7;
    int _x000 = 8;
    int _and = 3;

    int _1_9 = _1 + _2 + _3 + _4 + _5 + _6 + _7 + _8 + _9;

    int _10_19 = _10 + _11 + _12 + _13 + _14 + _15 + _16 + _17 + _18 + _19;

    int _1_99 = _1_9*9 + _10_19 + (_20 + _30 + _40 + _50 + _60 + _70 + _80 + _90)*10;

    int _x00_x99 = _x00*100 + _and*99 + _1_99;

    int _1_1000 = _1_99 + _1_9*100 + _x00_x99*9 + _1 + _x000;

    cout << _1_1000 << endl;
    return 0;
}

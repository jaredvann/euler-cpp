/*
Project Euler Problem 25:

The Fibonacci sequence is defined by the recurrence relation:

F_n = F_[n−1] + F_[n−2], where F_1 = 1 and F_2 = 1.
Hence the first 12 terms will be:

F_1 = 1
F_2 = 1
F_3 = 2
F_4 = 3
F_5 = 5
F_6 = 8
F_7 = 13
F_8 = 21
F_9 = 34
F_10 = 55
F_11 = 89
F_12 = 144
The 12th term, F_[12], is the first term to contain three digits.

What is the index of the first term in the Fibonacci sequence to contain 1000 digits?
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


vector<int> addBigInts(const vector<int>& a, const vector<int>& b) {
    vector<int> r (max(a.size(), b.size()), 0);
    int c = 0;

    for (int i = 0; i < r.size(); i++) {
        r[i] = a[i] + b[i] + c;
        c = 0;

        while (r[i] > 9) {
            r[i] -= 10;
            c++;
        }
    }

    if (c > 0) {
        r.push_back(c);
    }

    return r;
}


int main(int argc, char const *argv[]) {
    vector<int> n;
    vector<int> n_m1 = {1,0};
    vector<int> n_m2 = {1,0};

    n.reserve(1000);
    n_m1.reserve(1000);
    n_m2.reserve(1000);

    int i;

    for (i = 3; n.size() < 1000; i++) {
        n = addBigInts(n_m2, n_m1);
        n_m2 = n_m1;
        n_m1 = n;
    }

    cout << i-1 << endl;

    return 0;
}

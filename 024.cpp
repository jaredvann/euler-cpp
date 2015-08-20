/*
Project Euler Problem 24:

A permutation is an ordered arrangement of objects. For example, 3124 is one possible permutation of the digits 1, 2, 3 and 4. If all of the permutations are listed numerically or alphabetically, we call it lexicographic order. The lexicographic permutations of 0, 1 and 2 are:

012   021   102   120   201   210

What is the millionth lexicographic permutation of the digits 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9?
*/

// https://en.wikipedia.org/wiki/Permutation#Permutations_in_computing

#include <iostream>
#include <vector>

using namespace std;


int main(int argc, char const *argv[]) {
    vector<int> temp, arr = {0,1,2,3,4,5,6,7,8,9};
    int t;

    for (int i = 1; i < 1000000; i++) {
        for (int k = arr.size()-2; k >= 0; k--) {
            if (arr[k] < arr[k+1]) {
                for (int l = arr.size()-1; l > 0; l--) {
                    if (k != l && arr[k] < arr[l]) {
                        t = arr[k];
                        arr[k] = arr[l];
                        arr[l] = t;

                        temp = {};

                        for (int a = arr.size()-1; a >= k+1; a--) {
                            temp.push_back(arr[a]);
                        }

                        for (int b = 0; b < temp.size(); b++) {
                            arr[b+k+1] = temp[b];
                        }

                        goto b;
                    }
                }
            }
        }

        b:
        continue;
    }

    for (auto x : arr) {
        cout << x << ' ';
    }
    cout << endl;

    return 0;
}

/*
Project Euler Problem 22:

Using names.txt (https://projecteuler.net/project/resources/p022_names.txt), a 46K text file containing over five-thousand first names, begin by sorting it into alphabetical order. Then working out the alphabetical value for each name, multiply this value by its alphabetical position in the list to obtain a name score.

For example, when the list is sorted into alphabetical order, COLIN, which is worth 3 + 15 + 12 + 9 + 14 = 53, is the 938th name in the list. So, COLIN would obtain a score of 938 × 53 = 49714.

What is the total of all the name scores in the file?
*/

#include <iostream>
#include <fstream>
#include <set>

using namespace std;


int main(int argc, char const *argv[]) {
    set<string> l;
    string s;
    int r = 0, i = 1;

    ifstream myfile("022_names.txt");
    getline(myfile, s);
    myfile.close();

    s.erase(0, 1);
    s.erase(s.length()-1, 1);

    string delimiter = "\",\"";

    int pos = 0;
    while ((pos = s.find(delimiter)) != string::npos) {
        l.insert(s.substr(0, pos));
        s.erase(0, pos + delimiter.length());
    }

    l.insert(s);

    for (auto n : l) {
        for (auto c : n) {
            r += ((int)c - 64) * i;
        }
        i++;
    }

    cout << r << endl;
    return 0;
}

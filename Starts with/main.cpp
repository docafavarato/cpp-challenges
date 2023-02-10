// Write a function that reads two strings and returns true if the first one starts with the second one.

#include <iostream>
using namespace std;

bool starts_with(string x, string y) {
    x.resize(y.length());
    if (x == y) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string x = "mundo";
    cout << starts_with(x, "mun");
    return 0;
}
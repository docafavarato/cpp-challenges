// Write a script that inverts a given string

#include <iostream>
using namespace std;

string reverse(string x) {
    string reversed;
    for (int i = x.length() + 1; i--;) {
        reversed += x[i];
    }

    return reversed;
}

int main() {
    cout << reverse("hello world");
    return 0;   
}


// Create a program that draws the super mario stairs based on a given amount of levels

#include <iostream>
using namespace std;

string stairs(int levels) {
    int count = 1;
    for (int i = levels; i > 0; i--) {
        if (i == levels) {
            cout << string(i, ' ') << "?" << endl;
            cout << string(i, ' ') << "|" << endl;
        }
        cout << string(i, ' ') << string(count, '#') << endl;
        count++;
    }

    return "x";
}

int main() {
    stairs(10);
    return 0;
}

#include <iostream>
#include <list>

using namespace std;

int main() {
    int number, factorial = 1, r;
    string resp;
    list<int> all_numbers;
    list<int> total_zeros;

    start:
    cout << "Insert a number: ";
    cin >> number;

    for (int i = number; i >= 1; i--) {
        all_numbers.push_back(i);
    }

    for (int x : all_numbers) {
        factorial = factorial * x;
    }

    cout << "Result: " << factorial << endl;

    while (factorial > 0) {
        r = factorial % 10;
        factorial = factorial / 10;
        if (r == 0) {
            total_zeros.push_back(r);
        }
    }

    cout << "Total zeros: " << total_zeros.size() << endl;
    cout << "\nStart again? [y/n] -> ";
    cin >> resp;

    if (resp == "y" or resp == "Y") {
        goto start;
    }
     
}
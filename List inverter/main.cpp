// Write a function that inverts a given list

#include <iostream>
#include <list>

using namespace std;

list<int> list_inverter(list<int> x) {
    list<int> inverted_list;
    for (int i = x.size() + 1; i--;) {
        inverted_list.push_back(i);
    }
    return inverted_list;
}

int main() {
    list<int> my_list = {1, 2, 3};
    for (int i : list_inverter(my_list)) {
        cout << i;
    }
    return 0;
}
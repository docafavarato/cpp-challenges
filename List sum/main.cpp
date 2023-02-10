// Create a script that sums up all the numbers from a given list

#include <iostream>
#include <list>

using namespace std;

int sum_list(list<int> list_object){
    int result = 0;

    for (int i : list_object) {
        result += i;
    }
    return result;
}

int main() {
    cout << sum_list({1, 3, 5, 6, 7});
    return 0;
}
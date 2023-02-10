// Create a program that generates a random password within a given length

#include <iostream>
#include <time.h>

using namespace std;

string password_generator(int length) {
    string chars[60] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "a", "b", "c", "d", "e", "f",
                        "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v",
                        "w", "x", "y", "z", "!", "@", "#", "$", "%", "¨", "&", "*", "(", ")", "_", "-", "="};
    
    srand((unsigned int)time(0));
    string password;
    for (int i = 0; i < length; i++) {
        int randomIndex = rand() % 51;
        password.append(chars[randomIndex]);
    }

    return password;
}

int main() { 
    int length;

    cout << "Insira a quantidade de caracteres desejados na senha: ";
    cin >> length;
    cout << "Sua nova senha: " << password_generator(length);
    return 0;
}

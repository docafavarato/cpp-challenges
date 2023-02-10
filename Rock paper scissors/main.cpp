// Create a rock paper scissors game

#include <iostream>
#include <time.h>

using namespace std;

string computer_choice() {
    srand((unsigned int)time(NULL));
    int choice = rand() % 3;
    string result;

    switch (choice) {
        case 0:
            result = "Pedra";
            break;
        case 1:
            result = "Papel";
            break;
        case 2:
            result = "Tesoura";
            break;
    }

    return result;
}

string user_choice() {
    int choice;
    string result;
    cout << "Faça sua escolha -> [1] Pedra / [2] Papel / [3]Tesoura -> ";
    cin >> choice;
    switch (choice) {
        case 1:
            result = "Pedra";
        case 2:
            result = "Papel";
        case 3:
            result = "Tesoura";
    }
    return result;
}

int main() {
    string user = user_choice();
    string computer = computer_choice();

    if (user == computer) {
        cout << "Sua escolha: " << user << ". Escolha do computador: " << computer << ". Empate.";
    } else if (user == "Pedra") {
        if (computer == "Papel") {
            cout << "Sua escolha: " << user << ". Escolha do computador: " << computer << ". O computador venceu.";
        } else {
            cout << "Sua escolha: " << user << ". Escolha do computador: " << computer << ". Voce venceu.";
        }
    } else if (user == "Papel") {
        if (computer == "Tesoura") {
            cout << "Sua escolha: " << user << ". Escolha do computador: " << computer << ". O computador venceu.";
        } else {
            cout << "Sua escolha: " << user << ". Escolha do computador: " << computer << ". Voce venceu.";
        }
    } else if (user == "Tesoura") {
        if (computer == "Pedra") {
            cout << "Sua escolha: " << user << ". Escolha do computador: " << computer << ". O computador venceu.";
        } else {
            cout << "Sua escolha: " << user << ". Escolha do computador: " << computer << ". Voce venceu.";
        }
    }
    return 0;
}


#include <iostream>
#include <conio.h>

using namespace std;


#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77



int main() {
    system("cls");
    int leftSpaces = 3;
    int upSpaces = 0;
    int c = 0;
    
    while (true) {
        c = 0;
        switch ((c=getch())) {
            case KEY_RIGHT:
                leftSpaces++;
                system("cls");
                cout << "X: " << leftSpaces << " / ";
                cout << "Y: " << upSpaces << "\n";
                cout << string(50, '#') << "\n";
                for (int i = 0; i < 10; i++) {
                    if (i == upSpaces) {
                        cout << "#" << string(leftSpaces, ' ') + "o" << "\n";
                    } else {
                        cout << "#" << "\n";
                    }
                }
                cout << string(50, '#') << "\n";
                break;
            
            case KEY_LEFT:
                if (leftSpaces == 0) {upSpaces++;} 
                else {
                    leftSpaces--;
                    system("cls");
                    cout << "X: " << leftSpaces << " / ";
                    cout << "Y: " << upSpaces << "\n";
                    cout << string(50, '#') << "\n";
                    for (int i = 0; i < 10; i++) {
                        if (i == upSpaces) {
                            cout << "#" << string(leftSpaces, ' ') + "o" << "\n";
                        } else {
                            cout << "#" << "\n";
                        }
                    }
                    cout << string(50, '#') << "\n";
                    break;
                }
                

            case KEY_UP:
                if (upSpaces == 0) {upSpaces--;}
                else {
                    upSpaces --;
                    system("cls");
                    cout << "X: " << leftSpaces << " / ";
                    cout << "Y: " << upSpaces << "\n";
                    cout << string(50, '#') << "\n";
                    for (int i = 0; i < 10; i++) {
                        if (i == upSpaces) {
                            cout << "#" << string(leftSpaces, ' ') + "o" << "\n";
                        } else {
                            cout << "#" << "\n";
                        }
                    }
                    cout << string(50, '#') << "\n";
                    break;
                }
                

            case KEY_DOWN:
                if (upSpaces == 9) {;}
                else {
                    upSpaces ++;
                    system("cls");
                    cout << "X: " << leftSpaces << " / ";
                    cout << "Y: " << upSpaces << "\n";
                    cout << string(50, '#') << "\n";
                    for (int i = 0; i < 10; i++) {
                        if (i == upSpaces) {
                            cout << "#" << string(leftSpaces, ' ') + "o" << "\n";
                        } else {
                            cout << "#" << "\n";
                        }
                    }
                    cout << string(50, '#') << "\n";
                    break;
                }
                
        }
    }

    return 0;
}
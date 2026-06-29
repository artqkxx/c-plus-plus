#include "modules.h"
using namespace std;

int main() {
    int choice;
    while (true) {
        cout << "1-Порівняння, 2-Статистика, 3-Вихід: ";
        cin >> choice;
        if (choice == 3) break;
        if (choice == 1) task1();
        else if (choice == 2) task2();
    }
    return 0;
}
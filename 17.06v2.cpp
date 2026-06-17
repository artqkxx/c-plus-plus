#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student {
    string sur;
    string grp;
    int marks[5];
};

struct Date {
    int d, m, y;
};

struct Man {
    string sur;
    string name;
    int age;
    Date bday;
};

int main() {
    /* 1 */
    int sz1 = 0;
    Student* arr1 = nullptr;
    int choice1;
    while (true) {
        cout << "1-Додати, 2-Відмінники, 3-Двієчники, 4-Далі: ";
        cin >> choice1;
        if (choice1 == 4) break;
        if (choice1 == 1) {
            Student* tmp = new Student[sz1 + 1];
            for (int i = 0; i < sz1; i++) tmp[i] = arr1[i];
            cout << "Прізвище, група: ";
            cin >> tmp[sz1].sur >> tmp[sz1].grp;
            cout << "5 оцінок (2-5): ";
            for (int j = 0; j < 5; j++) cin >> tmp[sz1].marks[j];
            delete[] arr1;
            arr1 = tmp;
            sz1++;
        } else if (choice1 == 2) {
            for (int i = 0; i < sz1; i++) {
                int g = 0;
                for (int j = 0; j < 5; j++) if (arr1[i].marks[j] == 5) g++;
                if (g > 3) cout << arr1[i].sur << endl;
            }
        } else if (choice1 == 3) {
            for (int i = 0; i < sz1; i++) {
                int b = 0;
                for (int j = 0; j < 5; j++) if (arr1[i].marks[j] == 2 || arr1[i].marks[j] == 3) b++;
                if (b > 2) cout << arr1[i].sur << endl;
            }
        }
    }
    delete[] arr1;

    /* 2
    vector<Man> v;
    int choice2;
    while (true) {
        cout << "1-Додати, 2-Видалити, 3-Сорт, 4-Іменинники, 5-Пошук, 6-Редагувати, 7-Вихід: ";
        cin >> choice2;
        if (choice2 == 7) break;
        if (choice2 == 1) {
            Man m;
            cout << "Прізвище, Ім'я, Вік: ";
            cin >> m.sur >> m.name >> m.age;
            cout << "ДН (д м р): ";
            cin >> m.bday.d >> m.bday.m >> m.bday.y;
            v.push_back(m);
        } else if (choice2 == 2) {
            int idx; cout << "Індекс: "; cin >> idx;
            if (idx >= 0 && idx < v.size()) v.erase(v.begin() + idx);
        } else if (choice2 == 3) {
            int type; cout << "1-Прізвище, 2-Ім'я: "; cin >> type;
            for (size_t i = 0; i < v.size(); i++) {
                for (size_t j = i + 1; j < v.size(); j++) {
                    if ((type == 1 && v[i].sur > v[j].sur) || (type == 2 && v[i].name > v[j].name)) {
                        swap(v[i], v[j]);
                    }
                }
            }
            for (size_t i = 0; i < v.size(); i++) cout << v[i].sur << " " << v[i].name << endl;
        } else if (choice2 == 4) {
            int m; cout << "Місяць: "; cin >> m;
            for (size_t i = 0; i < v.size(); i++) {
                if (v[i].bday.m == m) cout << v[i].sur << " " << v[i].bday.d << "." << v[i].bday.m << endl;
            }
        } else if (choice2 == 5) {
            string s, n; cout << "Прізвище, ім'я: "; cin >> s >> n;
            for (size_t i = 0; i < v.size(); i++) {
                if (v[i].sur == s && v[i].name == n) cout << "Знайдено, індекс: " << i << endl;
            }
        } else if (choice2 == 6) {
            int idx; cout << "Індекс: "; cin >> idx;
            if (idx >= 0 && idx < v.size()) {
                cout << "Нове Прізвище, Ім'я, Вік: ";
                cin >> v[idx].sur >> v[idx].name >> v[idx].age;
            }
        }
    }
    */

    return 0;
}
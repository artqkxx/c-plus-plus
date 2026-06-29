#include "modules.h"
using namespace std;

void task1() {
    string f1, f2;
    cout << "Файл 1: "; cin >> f1;
    cout << "Файл 2: "; cin >> f2;
    ifstream in1(f1), in2(f2);
    if (!in1.is_open() || !in2.is_open()) {
        cout << "Помилка файлу\n"; return;
    }
    string s1, s2;
    int line = 1;
    bool match = true;
    while (getline(in1, s1) && getline(in2, s2)) {
        if (s1 != s2) {
            cout << "Рядок " << line << " не збігається:\n";
            cout << f1 << ": " << s1 << endl;
            cout << f2 << ": " << s2 << endl;
            match = false; break;
        }
        line++;
    }
    if (match) {
        if (getline(in1, s1)) cout << "У " << f1 << " є додаткові рядки\n";
        else if (getline(in2, s2)) cout << "У " << f2 << " є додаткові рядки\n";
        else cout << "Файли однакові\n";
    }
    in1.close(); in2.close();
}

void task2() {
    string src, dst;
    cout << "Вхідний файл: "; cin >> src;
    cout << "Файл статистики: "; cin >> dst;
    ifstream in(src);
    if (!in.is_open()) {
        cout << "Помилка файлу\n"; return;
    }
    int words = 0, lines = 0, digits = 0;
    string s;
    while (getline(in, s)) {
        lines++;
        bool inWord = false;
        for (char c : s) {
            if (isdigit(c)) digits++;
            if (isspace(c)) {
                if (inWord) { words++; inWord = false; }
            } else {
                inWord = true;
            }
        }
        if (inWord) words++;
    }
    in.close();
    ofstream out(dst);
    out << "Слів: " << words << "\nРядків: " << lines << "\nЦифр: " << digits << "\n";
    out.close();
    cout << "Готово\n";
}
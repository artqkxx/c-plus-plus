#include <iostream>
#include <string>
using namespace std;

struct Specs {
    double engine;
    string color;
    int owners;
};

struct Car {
    string brand;
    string model;
    int year;
    int price;
    bool bargain;
    Specs info;
};

void showTable(Car arr[], int size);

int main() {
    int size;
    cout << "Кількість авто: ";
    cin >> size;

    Car* market = new Car[size];

    for (int i = 0; i < size; i++) {
        cout << "Марка, модель: ";
        cin >> market[i].brand >> market[i].model;
        cout << "Рік, ціна: ";
        cin >> market[i].year >> market[i].price;
        cout << "Торг (1-так, 0-ні): ";
        cin >> market[i].bargain;
        cout << "Об'єм, колір, власники: ";
        cin >> market[i].info.engine >> market[i].info.color >> market[i].info.owners;
    }

    showTable(market, size);

    delete[] market;
    return 0;
}

void showTable(Car arr[], int size) {
    cout << "\n-----------------------------------------------------------------------------\n";
    cout << "Марка\tМодель\tРік\tЦіна\tТорг\tДвиг.\tКолір\tВласн.\n";
    cout << "-----------------------------------------------------------------------------\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i].brand << "\t" 
             << arr[i].model << "\t" 
             << arr[i].year << "\t" 
             << arr[i].price << "\t" 
             << (arr[i].bargain ? "Так" : "Ні") << "\t" 
             << arr[i].info.engine << "\t" 
             << arr[i].info.color << "\t" 
             << arr[i].info.owners << "\n";
    }
    cout << "-----------------------------------------------------------------------------\n";
}
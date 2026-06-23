#define INTEGER
#include "function.h"
using namespace std;

int main() {
    srand(time(0));
    int a[10];
    fill(a, 10);
    cout<<"Масив: ";
    show(a, 10);
    cout<<"Min: "<<getMin(a, 10)<<endl;
    cout<<"Max: "<<getMax(a, 10)<<endl;
    sortArr(a, 10);
    cout<<"Сорт: ";
    show(a, 10);
    int idx, val;
    cout<<"Індекс і значення: ";
    cin>>idx>>val;
    edit(a, 10, idx, val);
    show(a, 10);
    return 0;
}
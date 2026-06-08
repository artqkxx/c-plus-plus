#include <iostream>
using namespace std;

/* 1 */
template <typename T>
T max1D(T arr[], int size) {
    T mx = arr[0];
    for (int i = 1;i < size;i++) {
        if (arr[i] > mx) mx = arr[i];
    }
    return mx;
}

template <typename T>
T max2D(T arr[2][3], int r, int c) {
    T mx = arr[0][0];
    for (int i = 0;i < r;i++) {
        for (int j = 0;j < c;j++) {
            if (arr[i][j] > mx) mx = arr[i][j];
        }
    }
    return mx;
}

/* 2 */
int recSearch(int arr[], int size, int key, int idx = 0) {
    if (idx == size) return -1;
    if (arr[idx] == key) return idx;
    return recSearch(arr, size, key, idx + 1);
}

int main() {
    /* 1 */
    int a1[5];
    cout << "Масив 1D (5): ";
    for (int i = 0;i < 5;i++) cin >> a1[i];
    cout << "Max 1D: " << max1D(a1, 5) << endl;

    int a2[2][3];
    cout << "Масив 2D (2x3): ";
    for (int i = 0;i < 2;i++) {
        for (int j = 0;j < 3;j++) cin >> a2[i][j];
    }
    cout << "Max 2D: " << max2D(a2, 2, 3) << endl;

    /* 2
    int a3[12], val;
    cout<<"Масив 12 ел: ";
    for(int i=0;i<12;i++) cin>>a3[i];
    cout<<"Що шукаємо: ";
    cin>>val;
    int pos = recSearch(a3, 12, val);
    if(pos!=-1) cout<<"Індекс: "<<pos<<endl;
    else cout<<"Не знайдено\n";
    */

    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    system("chcp 1251>null");
    // 1 завдання
    int size1;
    cout << "Введіть розмір масиву: ";
    cin >> size1;
    int* arr1 = new int[size1];
    cout << "Введіть елементи масиву: ";
    for (int i = 0;i < size1;i++)cin >> arr1[i];

    for (int i = 0;i < size1 - 1;i++) {
        bool swapped = false;
        for (int j = 0;j < size1 - i - 1;j++) {
            if (arr1[j] > arr1[j + 1]) {
                int temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped)break;
    }

    cout << "Відсортований масив: ";
    for (int i = 0;i < size1;i++)cout << arr1[i] << " ";
    cout << endl;
    delete[] arr1;

    // 2 завдання
    //int size2;
    //cout<<"Введіть кількіст оладок: ";
    //cin>>size2;
    //int* arr2 = new int[size2];
    //cout<<"Введіть радіуси оладок: ";
    //for(int i=0;i<size2;i++)cin>>arr2[i];

    //int op_count=0;
    //for(int curr_size=size2;curr_size>1;curr_size--){
    //    int max_idx=0;
    //    for(int i=1;i<curr_size;i++){
    //        if(arr2[i]>arr2[max_idx])max_idx=i;}

    //    if(max_idx!=curr_size-1){
    //        if(max_idx!=0){
    //            int s=0, e=max_idx;
    //            while(s<e){
    //                int tmp=arr2[s];
    //                arr2[s]=arr2[e];
    //                arr2[e]=tmp;
    //                s++;e--;}
    //            op_count++;}
    //        int s=0, e=curr_size-1;
    //        while(s<e){
    //            int tmp=arr2[s];
    //            arr2[s]=arr2[e];
    //            arr2[e]=tmp;
    //            s++;e--;}
    //        op_count++;}}

    //cout<<"Відсортовані за зменшенням: ";
    //for(int i=0;i<size2;i++)cout<<arr2[i]<<" ";
    //cout<<endl<<"Кількість операцій: "<<op_count<<endl;
    //delete[] arr2;
    //

    return 0;
}
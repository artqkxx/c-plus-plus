/ 1

#include <iostream>
using namespace std;

void MinMax(int a, int b, int c)
{
    int min = a;
    int max = a;

    if (b < min) min = b;
    if (c < min) min = c;

    if (b > max) max = b;
    if (c > max) max = c;

    cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;
}

int main()
{
    MinMax(10, 5, 20);
    return 0;
}
```

/// 2
//
//```cpp
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//void CountElements(int arr[], int size)
//{
//    int positive = 0;
//    int negative = 0;
//    int zero = 0;
//
//    for (int i = 0; i < size; i++)
//    {
//        if (arr[i] > 0)
//            positive++;
//        else if (arr[i] < 0)
//            negative++;
//        else
//            zero++;
//    }
//
//    cout << "\nДодатних: " << positive << endl;
//    cout << "Від'ємних: " << negative << endl;
//    cout << "Нулів: " << zero << endl;
//}
//
//int main()
//{
//    srand(time(0));
//
//    int size;
//    cin >> size;
//
//    int* arr = new int[size];
//
//    for (int i = 0; i < size; i++)
//    {
//        arr[i] = rand() % 21 - 10;
//        cout << arr[i] << " ";
//    }
//
//    cout << endl;
//
//    CountElements(arr, size);
//
//    delete[] arr;
//
//    return 0;
//}
//```
//
/// 3
//
//```cpp
//#include <iostream>
//using namespace std;
//
//void SortArray(int arr[], int size, bool descending = true)
//{
//    for (int i = 0; i < size - 1; i++)
//    {
//        for (int j = 0; j < size - i - 1; j++)
//        {
//            if ((descending && arr[j] < arr[j + 1]) ||
//                (!descending && arr[j] > arr[j + 1]))
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//int main()
//{
//    int arr[10] = { 7, 2, 9, 1, 5, 4, 8, 3, 10, 6 };
//
//    SortArray(arr, 10, false);
//
//    for (int i = 0; i < 10; i++)
//        cout << arr[i] << " ";
//
//    return 0;
//}
//```
//
/// 4
//
//```cpp
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int RollDice()
//{
//    return rand() % 6 + 1;
//}
//
//void PlayerMove(string name, int& total)
//{
//    int d1 = RollDice();
//    int d2 = RollDice();
//
//    int sum = d1 + d2;
//    total += sum;
//
//    cout << name << ": [" << d1 << "] [" << d2 << "] = " << sum << endl;
//}
//
//int main()
//{
//    srand(time(0));
//
//    int playerTotal = 0;
//    int computerTotal = 0;
//
//    int first;
//    cin >> first;
//
//    for (int i = 1; i <= 5; i++)
//    {
//        if (first == 1)
//        {
//            PlayerMove("Гравець", playerTotal);
//            PlayerMove("Комп'ютер", computerTotal);
//        }
//        else
//        {
//            PlayerMove("Комп'ютер", computerTotal);
//            PlayerMove("Гравець", playerTotal);
//        }
//    }
//
//    cout << "Сума гравця: " << playerTotal << endl;
//    cout << "Сума комп'ютера: " << computerTotal << endl;
//
//    cout << "Середнє гравця: " << (double)playerTotal / 5 << endl;
//    cout << "Середнє комп'ютера: " << (double)computerTotal / 5 << endl;
//
//    if (playerTotal > computerTotal)
//        cout << "Переміг гравець";
//    else if (computerTotal > playerTotal)
//        cout << "Переміг комп'ютер";
//    else
//        cout << "Нічия";
//
//    return 0;
//}
//```
//
/// 5
//
//```cpp
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int FindMinSequence(int arr[], int size)
//{
//    int minSum = 0;
//
//    for (int i = 0; i < 10; i++)
//        minSum += arr[i];
//
//    int currentSum = minSum;
//    int position = 0;
//
//    for (int i = 1; i <= size - 10; i++)
//    {
//        currentSum = currentSum - arr[i - 1] + arr[i + 9];
//
//        if (currentSum < minSum)
//        {
//            minSum = currentSum;
//            position = i;
//        }
//    }
//
//    return position;
//}
//
//int main()
//{
//    srand(time(0));
//
//    const int SIZE = 100;
//    int arr[SIZE];
//
//    for (int i = 0; i < SIZE; i++)
//        arr[i] = rand() % 100 - 50;
//
//    for (int i = 0; i < SIZE; i++)
//    {
//        cout.width(4);
//        cout << arr[i];
//
//        if ((i + 1) % 10 == 0)
//            cout << endl;
//    }
//
//    cout << "\nПозиція: " << FindMinSequence(arr, SIZE);
//
//    return 0;
//}
//```

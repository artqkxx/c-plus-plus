/ 1 (char[])

```cpp
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    char str[256];

    cin.getline(str, 256);

    int letters = 0;
    int digits = 0;
    int others = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
            letters++;
        else if (isdigit(str[i]))
            digits++;
        else
            others++;
    }

    cout << "Letters: " << letters << endl;
    cout << "Digits: " << digits << endl;
    cout << "Others: " << others << endl;

    return 0;
}
```

/ 1 (string)

```cpp
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str;

    getline(cin, str);

    int letters = 0;
    int digits = 0;
    int others = 0;

    for (char ch : str)
    {
        if (isalpha(ch))
            letters++;
        else if (isdigit(ch))
            digits++;
        else
            others++;
    }

    cout << "Letters: " << letters << endl;
    cout << "Digits: " << digits << endl;
    cout << "Others: " << others << endl;

    return 0;
}
```

/ 2 (char[])

```cpp
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[256];

    cin.getline(str, 256);

    int len = strlen(str);
    bool palindrome = true;

    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "Palindrome";
    else
        cout << "Not palindrome";

    return 0;
}
```

/ 2 (string)

```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    getline(cin, str);

    bool palindrome = true;

    for (int i = 0; i < str.length() / 2; i++)
    {
        if (str[i] != str[str.length() - 1 - i])
        {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "Palindrome";
    else
        cout << "Not palindrome";

    return 0;
}
```

#include <iostream>

using namespace std;

void turn_upper(string &str);

int main()
{
    string str;

    cout << "Enter a string(q to quit): ";
    while ((cin >> str) && str != "q")
    {
        turn_upper(str);
        cout << "Another string: ";
    }

    return 0;
}

void turn_upper(string &str)
{
    cout << "Uppercase string(q to quit): ";
    for (int i = 0; i < str.length(); i++)
        cout << (char)toupper(str[i]);
    cout << endl
         << endl;
}
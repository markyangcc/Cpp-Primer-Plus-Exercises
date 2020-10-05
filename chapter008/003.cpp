#include <iostream>

using namespace std;

void turn_upper(string &str);

int main()
{
    string str = "Hello, cpp!";
    turn_upper(str);
    return 0;
}

void turn_upper(string &str)
{
    for (int i = 0; i < str.length(); i++)
        cout << (char)toupper(str[i]);
    cout << endl;
}
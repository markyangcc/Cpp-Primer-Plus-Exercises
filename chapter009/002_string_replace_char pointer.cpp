#include <iostream>
#include <string>

using namespace std;

void strcount(string str);

int main()
{
    string input;
    char next;

    cout << "Enter a line:" << endl;

    while (cin >> input && input != "q")
    {
        strcount(input);
        cout << "Enter next line(q to quit):" << endl;
    }
    cout << "Byte" << endl;
    return 0;
}

void strcount(string str)
{

    static int total = 0;
    int count = 0;
    count = str.length();
    total += count;

    cout << "\"" << str << "\" contains " << count << " characters" << endl;
    cout << "Total characters: " << total << " characters" << endl;
}
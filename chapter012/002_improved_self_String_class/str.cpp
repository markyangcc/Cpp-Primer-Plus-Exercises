#include "str.h"
#include <cstring>

//default constructor
String::String()
{
    str = new char[1];
    str[0] = '\0';
    len = 0;
}

String::String(const char *s)
{
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
}

String::String(const String &st)
{
    len = st.len;

    str = new char[len + 1];
    strcpy(str, st.str);
}

String::~String()
{
    delete[] str;
}

String &String::operator=(const String &st)
{
    if (this == &st)
        return *this;

    //TODO: test allocat twice memory name str, to test id delete not used
    delete[] str;

    len = st.len;

    str = new char[len + 1];
    strcpy(str, st.str);

    return *this;
}

String &String::operator=(const char *s)
{

    //TODO: test allocat twice memory name str, to test id delete not used
    len = strlen(s);

    delete[] str;

    str = new char[len + 1];
    strcpy(str, s);

    return *this;
}

//read-write char access
char &String::operator[](int i)
{
    return str[i];
}

//read-only char access
const char &String::operator[](int i) const
{
    return str[i];
}

void String::stringup()
{
    int i = 0;
    while (str[i] != '\0')
    {
        str[i] = toupper(str[i]);
        i++;
    }
}
void String::stringlow()
{
    int i = 0;
    while (str[i] != '\0')
    {
        str[i] = tolower(str[i]);
        i++;
    }
}

int String::has(char c)
{
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == c)
            count++;
    }
    return count;
}

bool operator<(const String &st1, const String &st2)
{
    return (strcmp(st1.str, st2.str) < 0);
}
bool operator>(const String &st1, const String &st2)
{
    return (strcmp(st1.str, st2.str) > 0);
}
bool operator==(const String &st1, const String &st2)
{
    return (strcmp(st1.str, st2.str) == 0);
}

String operator+(const String &st1, const String &st2)
{
    int length = st1.len + st2.len;

    char *temp = new char[length + 1];
    strcpy(temp, st1.str);

    String s = strcat(temp, st2.str);
    delete[] temp;

    return s;
}

String operator+(char *s, const String &st)
{
    return String(s) + st; //operator + match String &operator+(const String &st1, const String &st2);
}

String operator+(const String &st, const char *s)
{
    return st + String(s);
    //Or use return s + st; To match String operator+(char *s, const String &st)
}

std::ostream &operator<<(std::ostream &os, const String &st)
{
    os << st.str;

    return os;
}
std::istream &operator>>(std::istream &is, String &st)
{
    char temp[String::CINLIM];

    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;

    return is;

    // is >> st.str;

    // return is;
}

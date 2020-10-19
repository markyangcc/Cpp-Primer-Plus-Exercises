#include "str.h"

String::String()
{
    str = new char[1];
    str[0] = '\0';
    len = 0;
    num_strings++;
}

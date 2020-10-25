#include "wire.h"
#include <cstring>

Wine::Wine(const char *l, int y, const int yr[], const int bot[])
{
    name = l;
    year = y;
    info(yr, bot);
}
Wine::Wine(const char *l, int y) {}

void Wine::GetBottles() {}
Wine &Wine::Label() {}
int Wine::sum() {}

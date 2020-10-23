#include "dma.h"
#include <cstring>

abcDMA::abcDMA(const char *la, int r)
{
    label = new char[strlen(la) + 1];
    strcpy(label, la);

    rating = r;
}
abcDMA::abcDMA(const abcDMA &rs)
{
    label = new char(strlen(rs.label) + 1);
    strcpy(label, rs.label);

    rating = rs.rating;
}
abcDMA::~abcDMA()
{
    delete[] label;
}

void abcDMA::View() const
{
    using std::cout;
    using std::endl;

    cout << "Label: " << label << endl;
    cout << "Rating: " << rating << endl;
}

abcDMA &abcDMA::operator=(const abcDMA &rs)
{
    if (this == &rs)
        return *this;

    delete[] label;
    label = new char(strlen(rs.label) + 1);
    strcpy(label, rs.label);

    rating = rs.rating;

    return *this;
}
std::ostream &operator<<(std::ostream &os, const abcDMA &rs)
{
    using std::endl;

    os << "label: " << rs.label << endl;
    os << "rating: " << rs.rating << endl;
    return os;
}

//base DMA
baseDMA::baseDMA(const char *la, int r) : abcDMA(la, r) {}

baseDMA::baseDMA(const baseDMA &rs) : abcDMA(rs) {}

baseDMA::~baseDMA() {}

void baseDMA::View() const
{
    abcDMA::View();
}

baseDMA &baseDMA::operator=(const baseDMA &rs)
{
    abcDMA::operator=(rs);

    return *this;
}

std::ostream &operator<<(std::ostream &os, const baseDMA &rs)
{
    os << (const abcDMA &)rs;
    return os;
}

lackDMA::lackDMA(const char *c, const char *la, int r) : abcDMA(la, r)
{
    strcpy(color, c);
}

lackDMA::lackDMA(const char *c, const lackDMA &rs) : abcDMA(rs)
{
    strcpy(color, rs.color);
}

lackDMA::~lackDMA() {}

void lackDMA::View() const
{
    using std::cout;
    using std::endl;

    cout << "color: " << color;

    abcDMA::View();
}

std::ostream &operator<<(std::ostream &os, const lackDMA &rs)
{
    os << "color: " << rs.color;

    os << (const abcDMA &)rs;

    return os;
}

//has DMA
hasDMA::hasDMA(const char *s, const char *la, int r) : abcDMA(la, r)
{
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}

hasDMA::hasDMA(const char *s, const hasDMA &rs) : abcDMA(rs)
{
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA &rs) : abcDMA(rs)
{
    style = new char[strlen(rs.style) + 1];
    strcpy(style, rs.style);
}

hasDMA::~hasDMA()
{
    delete[] style;
}

void hasDMA::View() const
{
    using std::cout;
    using std::endl;

    cout << "style: " << style;

    abcDMA::View();
}

hasDMA &hasDMA::operator=(const hasDMA &rs)
{
    if (this == &rs)
        return *this;

    abcDMA::operator=(rs);

    delete[] style;
    style = new char[strlen(rs.style) + 1];
    strcpy(style, rs.style);

    return *this;
}
std::ostream &operator<<(std::ostream &os, const hasDMA &rs)
{
    os << "style: " << rs.style;
    os << (const abcDMA &)rs;
    return os;
}
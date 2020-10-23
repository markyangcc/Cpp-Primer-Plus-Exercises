#ifndef DMA_H_
#define DMA_H_

#include <iostream>

//ABC
class abcDMA
{
private:
    char *label;
    int rating;

public:
    abcDMA(const char *la = "null", int r = 0);
    abcDMA(const abcDMA &rs);
    virtual ~abcDMA();

    virtual void View() const = 0; //pure virtual function
                                   // = 0 means it is "pure virtual
    //Note that it is possible to provide a definition for a pure virtual function,
    // but this usually confuses novices and is best avoided until later.

    abcDMA &operator=(const abcDMA &rs);
    friend std::ostream &operator<<(std::ostream &os, const abcDMA &rs);
};

//derived from abcDMA
class baseDMA : public abcDMA
{
private:
public:
    baseDMA(const char *la = "null", int r = 0);
    baseDMA(const baseDMA &rs);

    virtual ~baseDMA();
    virtual void View() const;
    baseDMA &operator=(const baseDMA &rs);
    friend std::ostream &operator<<(std::ostream &os, const baseDMA &rs);
};

class lackDMA : public abcDMA
{
private:
    enum
    {
        COL_LEN = 40
    };
    char color[COL_LEN];

public:
    lackDMA(const char *c = "blank", const char *la = "null", int r = 0);

    lackDMA(const char *c, const lackDMA &rs);

    virtual ~lackDMA();
    virtual void View() const;
    friend std::ostream &operator<<(std::ostream &os, const lackDMA &rs);
};

class hasDMA : public abcDMA
{
private:
    char *style;

public:
    hasDMA(const char *s = "none", const char *la = "null", int r = 0);
    hasDMA(const hasDMA &rs);

    hasDMA(const char *s, const hasDMA &rs);

    virtual ~hasDMA();
    virtual void View() const;
    hasDMA &operator=(const hasDMA &rs);
    friend std::ostream &operator<<(std::ostream &os, const hasDMA &rs);
};

#endif

class Plorg
{
private:
    static const int Len = 20;
    char name[Len];
    int ci;

public:
    Plorg(const char *na = "Plorga", int value = 50);
    void set_ci(int value);
    void show_plorg() const;
    ~Plorg();
};

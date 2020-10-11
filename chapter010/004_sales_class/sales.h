namespace SALES
{
    const int QUARTES = 4;

    class Sales
    {
    private:
        double sales[QUARTES];
        double average;
        double max;
        double min;

    public:
        Sales();

        void setSales(const double ar[], int n);
        void setSales();
        void showSales() const;

        ~Sales();
    };

    Sales::Sales(){};

    Sales::~Sales(){};

} // namespace SALES

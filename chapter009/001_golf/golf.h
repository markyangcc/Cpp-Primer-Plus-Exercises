const int Len = 40;

struct golf
{
    char fullname[Len];
    int handicap;
};

//non-interactive version:
void setgolf(golf &g, const char *name, int hc);

//interactive version:
int setgolf(golf &g);

//reset handicaps
void handicap(golf &g, int hc);

//display
void showgolf(const golf &g);
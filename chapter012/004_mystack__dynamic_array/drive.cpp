#include "mystack.cpp"

int main()
{
    {
        using std::cout;
        using std::endl;

        Stack st1;
        Stack st2;

        Item a = 1;
        Item b = 2;

        st1.push(a);
        st1.push(b);
        cout << st1;
        //  st1.pop(&st1);
        //cout << st1;

        //Stack st3 = st2;

        return 0;
    }
}
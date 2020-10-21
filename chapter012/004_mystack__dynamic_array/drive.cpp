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

        cout << "After pushed, Stack st1:" << endl;
        cout << st1;

        st1.pop();
        cout << "After poped one item, Stack st1:" << endl;
        cout << st1;

        Stack st3 = st1;

        cout << "Stack st3: " << endl;
        cout << st3;

        cout << "Stack st2: " << endl;
        cout << st2;

        return 0;
    }
}
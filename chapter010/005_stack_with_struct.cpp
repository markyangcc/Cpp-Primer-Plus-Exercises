#include <iostream>
#include <stack>

struct customer
{
    char fullname[35];
    double payment;
};

void report_total(double &total, const customer top_customer);

int main()
{
    double total = 0;
    std::stack<customer> s;

    customer cu1 = {"andy", 1.0};
    customer cu2 = {"ann", 2.0};
    customer cu3 = {"anna", 3.0};
    customer cu4 = {"amy", 4.0};

    s.push(cu1);
    s.push(cu2);
    s.push(cu3);
    s.push(cu4);

    customer top_customer;

    top_customer = s.top();
    s.pop();
    report_total(total, top_customer);
    std::cout << "Now stack size: " << s.size() << std::endl;
    std::cout << "-----------------------------" << std::endl;

    top_customer = s.top();
    s.pop();
    report_total(total, top_customer);
    std::cout << "Now stack size: " << s.size() << std::endl;
    std::cout << "-----------------------------" << std::endl;

    top_customer = s.top();
    s.pop();
    report_total(total, top_customer);
    std::cout << "Now stack size: " << s.size() << std::endl;
    std::cout << "-----------------------------" << std::endl;

    top_customer = s.top();
    s.pop();
    report_total(total, top_customer);
    std::cout << "Now stack size: " << s.size() << std::endl;
    std::cout << "-----------------------------" << std::endl;

    return 0;
}

void report_total(double &total, const customer top_customer)
{
    total += top_customer.payment;

    std::cout << "Customer: " << top_customer.fullname << std::endl
              << "Payment: " << top_customer.payment << std::endl
              << "has been removed." << std::endl;

    std::cout << "After [ " << top_customer.fullname << " ] removed, now total patment: " << total << std::endl;
}
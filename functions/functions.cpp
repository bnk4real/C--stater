#include <iostream>

double salary(double salary);

int main()
{
    double hours = 117.7;

    salary(hours);

    std::cout << "Total salary: $" << salary(hours);

    return 0;
}

double salary(double salary)
{
    return salary * 20;
}
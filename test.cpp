#include <iostream>

class Company
{
    private:
        std::string name;
        int salary;
    public:
        void    cin_value();
        int    get_sal();
};

void    Company::cin_value()
{
    std::cout << "Enter your name : " <<std::endl;
    std::cin >> name;
    std::cout << "Enter your salair : " <<std::endl;
    std::cin >> salary;
}
int    Company::get_sal()
{
    return (salary);
}

int main()
{
    Company c;
    Company c1;
    int sal;
    int sal1;
    int sum = 0;
    c.cin_value();
    c1.cin_value();
    sal = c.get_sal();
    sal1 = c1.get_sal();
    sum = sal + sal1;
    std::cout << sum << std::endl;
}
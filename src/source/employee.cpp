#include <iostream>
#include "employee.h"
Employee::Employee()
{
}

Employee::Employee(int id,const std::string &name, const std::string &designation, const std::string &role) : Name(name), Id(id), Designation(designation), Role(role)
{
}

Employee::~Employee()
{
}
void Employee::Print() const
{
    std::cout << "ID            : " << Id << std::endl;
    std::cout << "Name          : " << Name << std::endl;
    std::cout << "Designation   : " << Designation << std::endl;
    std::cout << "Role          : " << Role << std::endl;
}
#pragma once
#include <string>
#include <array>

class Employee
{
public:
    int Id;
    std::string Name;
    std::string Designation;
    std::string Role;
    std::array<int,31> Leaves;

public:
    Employee();
    Employee(int id,const std::string &name, const std::string &designation, const std::string &role);
    ~Employee();
    void Print() const;
};
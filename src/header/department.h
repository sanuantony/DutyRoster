#pragma once
#include <vector>
#include "employee.h"
#include "hod.h"

class Department
{
public:
	HoD HeadOfDepartment;
	std::vector<Employee> Employees;
	
public:
	Department();
	~Department();

private:
};

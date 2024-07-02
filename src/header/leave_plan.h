#pragma once
#include "employee.h"
#include <array>
class LeavePlan
{
public:
	Employee Staff;
	std::array<int,30> Leaves;
public:
	LeavePlan();
	~LeavePlan();
private:

};

#pragma once
#include <string>
using namespace std;

class cpu
{
	string model;
public:
	cpu();
	cpu(const char* a);
	cpu(cpu& obj);
	void Print();
};
#pragma once
#include <string>
using namespace std;
class mouse
{
	string model;
public:
	mouse();
	mouse(const char* a);
	mouse(mouse& obj);
	void Print();
};
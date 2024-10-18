#pragma once
#include <string>
using namespace std;

class keyboard
{
	string type;
public:
	keyboard();
	keyboard(const char* a);
	keyboard(keyboard& obj);
	void Print();
};
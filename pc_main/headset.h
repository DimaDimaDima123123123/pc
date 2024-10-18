#pragma once
#include <string>
using namespace std;

class headset
{
	string model;
public:
	headset();
	headset(const char* a);
	headset(headset& obj);
	void Print();
};
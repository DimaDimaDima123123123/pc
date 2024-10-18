#include <iostream>
#include "keyboard.h"
#include "headset.h"
#include "mouse.h"
#include "display.h"
#include "ram.h"
#include "ssd.h"
#include "cpu.h"
#include <string>
using namespace std;

//CPU
cpu::cpu()
{
	model = nullptr;
}
cpu::cpu(const char* a)
{
	model = a;
}
cpu::cpu(cpu& obj)
{
	model = obj.model;
}
void cpu::Print()
{
	cout << "Процессор: " << model << endl << endl;;
}

// SSD
ssd::ssd()
{
	gb = 0;
}
ssd::ssd(int a)
{
	gb = a;
}
void ssd::Print()
{
	cout << "Твёрдонакопитель (SSD): " << gb << endl << endl;;
}


// RAM
ram::ram()
{
	gb = 0;
}
ram::ram(int a)
{
	gb = a;
}
void ram::Print()
{
	cout << "ОЗУ: " << gb << endl << endl;;
}


// DISPLAY
display::display()
{
	inches = 0;
}
display::display(int a)
{
	inches = a;
}
void display::Print()
{
	cout << "Монитор: " << inches << endl << endl;;
}

// MOUSE
mouse::mouse()
{
	model = nullptr;
}
mouse::mouse(const char* a)
{
	model = a;
}
mouse::mouse(mouse& obj)
{
	model = obj.model;
}
void mouse::Print()
{
	cout << "Мышь: " << model << endl << endl;;
}



// HEADSET
headset::headset()
{
	model = nullptr;
}
headset::headset(const char* a)
{
	model = a;
}
headset::headset(headset& obj)
{
	model = obj.model;
}
void headset::Print()
{
	cout << "Наушники: " << model << endl << endl;;
}


// KEYBOARD
keyboard::keyboard()
{
	type = nullptr;
}
keyboard::keyboard(const char* a)
{
	type = a;
}
keyboard::keyboard(keyboard& obj)
{
	type = obj.type;
}
void keyboard::Print()
{
	cout << "Клавиатура: " << type << endl << endl;;
}


class PC
{
	cpu c;
	ssd s;
	ram r;
	display* d;
	mouse* m;
	headset* h;
	keyboard* k;

	int year;

public:
	PC()
	{
		c = nullptr;
		s = 0;
		r = 0;
		d = 0;
		h = nullptr;
		m = nullptr;
		k = nullptr;
		year = 0;
	}

	PC(int Y, int S, int R, const char* C, headset* H, display* D, keyboard* K, mouse* M) :s(S), r(R), c(C), h(H), d(D), k(K), m(M)
	{
		year = Y;
	}

	void Print()
	{
		cout << "Год: " << year << endl << endl;
		c.Print();
		s.Print();
		r.Print();
		d->Print();
		m->Print();
		h->Print();
		k->Print();
		
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	display d = 27;
	headset h{ "HyperX" };
	mouse m{ "Steelseries" };
	keyboard k{ "Razer" };
	

	PC* obj = new PC(2025, 1000, 32, "Ryzen", &h, &d, &k, &m);

	obj->Print();

	delete[] obj;
}

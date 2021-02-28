#include "Time.h"
#include <Windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Time a;
	a.Read();
	a.Display();
	a.incSeconds();
	a.SetMinutes(10);
	a.Display();
	a.addMinutes();
	a.Display();
	cout << a.toString();
	Time::Triad time;
	time.incMinutes();
	time.Display();
	time.GetHours();
	cout << time.toString() << endl;
	Time a2;
	a2.Init(time);
	a2.addSeconds();
	a2.Display();
}	
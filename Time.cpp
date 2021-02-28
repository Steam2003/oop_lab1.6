#include "Time.h"

void Time::Init(Triad value)
{
	this->time = value;
	Stabilizer();
}
void Time::incHours()
{
	time.SetHours(time.GetHours() + 1);
	HoursConverter();
}
void Time::incMinutes()
{
	time.SetMinutes(time.GetMinutes() + 1);
	MinutesConverter();
}
void Time::incSeconds()
{
	time.SetSeconds(time.GetSeconds() + 1);
	SecondsConverter();
}
void Time::Display() const
{
	cout << time.GetHours() << " ����� " << time.GetMinutes() << " ������ " << time.GetSeconds() << " ������ " << endl;
}
void Time::SetHours(int value)
{
	time.SetHours(time.GetHours() + value);
	HoursConverter();
}
void Time::HoursConverter()
{
	if (time.GetHours() >= 24)
		time.SetHours(time.GetHours() % 24);
}
void Time::SetMinutes(int value)
{
	time.SetMinutes(time.GetMinutes() + value);
	MinutesConverter();
}
void Time::MinutesConverter()
{
	while (time.GetMinutes() >= 60)
	{
		time.SetMinutes(time.GetMinutes() - 60);
		incHours();
	}
}
void Time::SetSeconds(int value)
{
	time.SetSeconds(time.GetSeconds() + value);
	SecondsConverter();
}
void Time::SecondsConverter()
{
	while (time.GetSeconds() >= 60)
	{
		time.SetSeconds(time.GetSeconds() - 60);
		incMinutes();
	}
}
void Time::addSeconds()
{
	int value;
	cout << "������ ������ ������ ������: "; cin >> value;
	time.SetSeconds(time.GetSeconds() + value);
	Stabilizer();
}
void Time::addMinutes()
{
	int value;
	cout << "������ ������ ������ ������: "; cin >> value;
	time.SetMinutes(time.GetMinutes() + value);
	Stabilizer();
}
void Time::Read()
{
	Triad a;
	int h, m, s;
	cout << "������ ������: "; cin >> h;
	cout << "������ �������: "; cin >> m;
	cout << "������ �������: "; cin >> s;
	a.Init(h, m, s);
	Init(a);
}
string Time::toString() const
{
	stringstream sout;
	sout << "����� 1: " << time.GetHours() << ", ����� 2: " << time.GetMinutes() << ", ����� 3: " << time.GetSeconds() << endl;
	return sout.str();
}
void Time::Stabilizer()
{
	SecondsConverter();
	MinutesConverter();
	HoursConverter();
}
void Time::Triad::Init(int a, int b, int c)
{
	hours = abs(a);
	minutes = abs(b);
	seconds = abs(c);
}
void Time::Triad::Read()
{
	int a, b, c;
	cout << "������ ����� 1: "; cin >> a;
	cout << "������ ����� 2: "; cin >> b;
	cout << "������ ����� 3: "; cin >> c;
	Init(a, b, c);
}
string Time::Triad::toString() const
{
	stringstream sout2;
	sout2 << "����� 1: " << hours << ", ����� 2: " << minutes << ", ����� 3: " << seconds << endl;
	return sout2.str();
}
void Time::Triad::Display() const
{
	cout << "����� 1: " << hours << ", ����� 2: " << minutes << ", ����� 3: " << seconds << endl;
}

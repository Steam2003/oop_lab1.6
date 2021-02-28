#pragma once
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

class Time
{
public:
	class Triad
	{
	private:
		int hours;
		int minutes;
		int seconds;
	public:
		void Init(int a, int b, int c);
		void Read();
		void SetHours(int value) { hours = abs(value); }
		void SetMinutes(int value) { minutes = abs(value); }
		void SetSeconds(int value) { seconds = abs(value); }
		void incHours() { ++hours; }
		void incMinutes() { ++minutes; }
		void incSeconds() { ++seconds; }
		int GetHours() const { return hours; }
		int GetMinutes() const { return minutes; }
		int GetSeconds() const { return seconds; }
		void Display() const;
		string toString() const;
	};
private:
	Triad time;
public:
	void Init(Triad value);
	void Read();
	void incHours();
	void incMinutes();
	void incSeconds();
	void Display() const;
	void HoursConverter();
	void MinutesConverter();
	void SecondsConverter();
	void addSeconds();
	void addMinutes();
	void SetHours(int value);
	void SetMinutes(int value);
	void SetSeconds(int value);
	int GetHours() const { return time.GetHours(); }
	int GetMinutes() const { return time.GetMinutes(); }
	int GetSeconds() const { return time.GetSeconds(); }
	void Stabilizer();
	string toString() const;
};


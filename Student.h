#pragma once
#include <iostream>
#include <string.h>
#include <windows.h>
#include <iomanip>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
enum ConsoleColor {
	Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray,
	LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
};
#include <stdio.h>
/*0 Ч черный
1 Ч синий
2 Ч зеленый
3 Ч голубой
4 Ч красный
5 Ч лиловый
6 Ч желтый
7 Ч белый
8 Ч серый
9 Ч свело - синий
A Ч светло - зеленый
B Ч светло - голубой
— Ч светло - красный
E Ч светло - желтый
F Ч €рко - белый
system("color F0");*/  // ”становка белого фона и черного текста
class Student
{
public:
	int age, i, max_val;
	string first_name, last_name;
	Student()
	{
		i = 0, max_val = 0;//инкремент и максимальное значение
	};
	Student(string name, string surname, int year)
	{
		first_name = name;
		last_name = surname;
		age = year;
	}
	void operator()()
	{
		vector <int> ages = { 25, 20, 23 };
		int min = *min_element(ages.begin(), ages.end());
		HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOut, (WORD)((1 << 1) | 1));
		cout << "минимальный возраст=" << min << endl << endl;
	}
	void print()
	{
		HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOut, (WORD)((2 << 2) | 2));
		cout << first_name << " " << last_name << ", " <<
			age << endl;
	}
	void konstantah()
	{
		const int x = 1;
		HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOut, (WORD)((3 << 3) | 3));
		cout << first_name << " " << last_name << ", " <<
			age + x << endl;
	}
	void constanta()
	{
		const int x = 1;
		HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOut, (WORD)((4 << 4) | 4));
		cout << first_name << " " << last_name << ", " <<
			age - x << endl;
	}
	void maximum()
	{
		vector <int> ages = { 25, 20, 23 };
		int max = *max_element(ages.begin(), ages.end());
		HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOut, (WORD)((5 << 5) | 5));
		cout << "максимальный возраст=" << max << endl << endl;
	}
};
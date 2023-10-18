// Lab_03_3.cpp
// Ожогова Дарина Сергіївна
//Лабораторна робота №3.3
// розгалуження, задане графіком функції
// Варіант 19

#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;
	double y;
	double R;
	cout << "R=  "; cin >> R;
	cout << "x=  "; cin >> x;

	if (x <= 1)
		y = -x - 1;
	else
		if (x > -1 && x <= 1)
			y = 0;
		else
			if (x > 1 && x < 1 + 2 * R)
				y = sqrt(R * R - (x - 1 - R)*(x - 1 - R));
			else y = (1 + 2 * R - x) / (6 - 2 * R);
	cout << endl;
	cout << "y=  " << y << endl;
	cin.get();
		return 0;
}
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

///Функция:
/// При след. интервалах
///  0 до 1
//double f(double x) {
//	return 4 * x + pow(4, x) - 6;
//	//2 * exp(x) - pow(x, 2);
//}


/// При след. интервалах
/// -2 до -1
///	 0 до  1
///  4 до  5
double f(double x)				//  объявление  функции методу половинного деления 
{
	return pow(x, 3) - 3 * pow(x, 2) - 5 * x + 3;//объявление уравнения корни которого надо найти )
}


int main() {
	int  n = 0;				// Шаг
	double a;				// Левая граница интервала
	cout << "Enter the left end of the interval  " << endl;
	cin >> a;
	double b;			// Правая граница
	cout << "Enter the right end of the interval " << endl;
	cin >> b;
	double c = (a * f(b) - b * f(a)) / (f(b) - f(a));	// Середина интервала
	const double eps = 0.0001;
	//while (abs(f(b) - f(a)) > eps) 
	do {
		n++;
		//c = (a * f(b) - b * f(a)) / (f(b) - f(a));
		cout << fixed << setprecision(15) << n << "\t" << a << "\t   " << b << "\t " << c << endl;
		if ((f(a) * f(c)) > 0)
		{
			a = c;
		}
		else {
			if ((f(b) * f(c)) > 0)
			{
				b = c;

			}
			else {
				if (f(c) == 0)
				{
					break;
				}
			}
		}
	double c1 = c;
	c = (a * f(b) - b * f(a)) / (f(b) - f(a));

	} while (abs(f(b) - f(a)) > eps);
	
	return 0;
}

//while (abs(c - c1) > eps) {
//	n++;
//	c = (a * (f(b) - b * f(a)) / (f(b) - f(a)));
//	cout << fixed << setprecision(5) << n << "\t" << a << "\t   " << b << "\t " << c << endl;

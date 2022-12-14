#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

///Функция:
/// При след. интервалах
///  0 до 1
//double f(double x) {
//	return 4 * x + pow(4,x) - 6;
//		//2 * exp(x) - pow(x, 2);
//}


/// При след. интервалах
/// -2 до -1
///	 0 до  1
///  4 до  5
double f(double x)				//  объявление  функции методу половинного деления 
{
    return pow(x,3) - 3 * pow(x,2) - 5 * x + 3;//объявление уравнения корни которого надо найти )
}


int main() {
	int  n = 0;				// Шаг
	double a;				// Левая граница интервала
	cout << "Enter the left end of the interval  " << endl;
	cin >> a;
	double b;			// Правая граница
	cout << "Enter the right end of the interval " << endl;
	cin >> b;
	double c=0;	// Середина интервала
	const double eps = 0.0001;
	
	while (b - a >= 2 * eps) {
		n++;
		c = (a + b) / 2;
		cout << fixed << setprecision(5) << n << "\t" << a << "\t   " << b << "\t " << c << endl;

		if ((f(a) * f(c)) < 0)
		{
			b = c;
		}
		else
			if ((f(b) * f(c)) < 0)
			{
				a = c;
			}
			else {
				if (f(c) == 0)
				{
					break;
				}
			}
	}
return 0;
}
		



//		else {
//			if ((f(b) * f(c)) < 0)
//			{
//				a = c;
//
//			}
//			else {
//				if (f(c) == 0) {
//					c = 0;
//					
//				}
//			}
//		}
//	}
//}
//
//double f(double x)//  объявление  функции методу половинного деления 
//{
//    return 4 * x + pow(4, x) - 6;//объявление уравнения корни которого надо найти )
//}
//
//double f1(double x)//  объявление  функции методу половинного деления 
//{
//    return pow(x,3) - 3 * pow(x,2) - 5 * x + 3;//объявление уравнения корни которого надо найти )
//}
//
//double s(double a, double b, double m)// обьявление переменных :a - левая граница интервала,b - правая граница интервала ,m - корень
//{
//    const double eps = 0.0001;      //объявляю точность eps=0,0001 
//    while (b - a > eps) {           //когда правая граница r - 1 > eps    
//        double mid = (a + b) / 2;   // mid - середина отрезка 
//        if (f(mid) > 0 == m)        //метод половинного деления 
//            a = mid;                //левая граница равна середине 
//        else                        // иначе
//            b = mid;                // правая граница равна середине 
//    }
//    return (a + b) / 2;             //выхожу с цикла 
//}
//int main()
//{
//    const double eps = 0.0001;// объявляю точность eps=0,001 
//    const double a = 0, b = 10;//левая граница = 0, а правая граница = 1
//    const int w = 10;// максимальное количество итераций
//    double m = f(a) > 0;//если корень уравнения больше 0 
//    double delta = (b - a) / w;// количество итераций 
//    for (int i = 0; i < w; ++i) {//цикл для поиска корня , і - количество проходов 
//        double x = a + i * delta;// нахожу корень 
//        if (f(x + delta) > 0 != m) {//если производная сумы (корень + дельта) >0 , то  знак меняется на противоположный
//            cout << "x=" << s(x, x + delta, m) << endl;//  вывод корня ( корней )
//            //cout << "x=" << s(x, x + delta, m) << endl;//  вывод корня ( корней )
//            m = !m;//меняю знаки местами
//        }
//
//    }
//    for (int i = 0; i < w; ++i) {//цикл для поиска корня , і - количество проходов 
//        double x = a + i * delta;// нахожу корень 
//        if (f1(x + delta) > 0 != m) {//если производная сумы (корень + дельта) >0 , то  знак меняется на противоположный
//            cout << "x=" << s(x, x + delta, m) << endl;//  вывод корня ( корней )
//           // cout << "x=" << s(x, x + delta, m) << endl;//  вывод корня ( корней )
//            m = !m;//меняю знаки местами
//        }
//
//    }
//    return 0;// закрываю цикл 
//}

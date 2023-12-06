#include <iostream>
using namespace std;

// template -> определение шаблона
// <typename T> -> тип данных который будет использовать наш шаблон

template< typename T1, typename T2> T2 Add(T2 a, T1 b)
{
	
	return a + b;
}
//int Add(int x, int y);
//double Add(double x, double y);
//string Add(string str1, string str2);

int main()
{
	setlocale(LC_ALL,"rus");
	cout << "int :" << Add(4, 5) << endl;
	cout << "double :" << Add(4.15, 5.56) << endl;
	cout << "string:" << Add(string("hel_"),string("lo")) << endl;

	return 0;
}


//int Add(int x, int y)
//{
//	return x + y;
//}
//double Add(double x, double y)
//{
//	return x + y;
//}
//
//string Add(string str1, string str2)
//{
//	return str1 + str2;
//}


////auto add(const auto a, const auto b)
////{
////	return a + b;
////}
//
// 
//template<typename T1, typename T2, typename T3> decltype(auto) ABS( T1 N, T2 M, T3 C)
//{
//	//return N < 0 ? -N : N;
//	return (N/M)/C;
//}
//
//
////int ABS(int N)
////{
////	return N < 0 ? -N : N;
////}
////double ABS(double N)
////{
////	return N < 0 ? -N : N;
////}
//
//
//int main()
//{
//	/*const int m = 3;
//	const int r = 9;
//	auto k = add(m, r);
//	cout << k <<endl;
//
//	const double m1 = 3.3;
//	const double r2 = 9.016;
//	cout << add(m1, r2) << endl;*/
//
//	auto n = ABS(15, 15.2, 0.5);
//	cout << n << endl;
//	cout << ABS(15,15,15) << endl;
//	cout << ABS(0.15) << endl;
//}
//

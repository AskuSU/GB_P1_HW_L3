#include <iostream>

using namespace std;

extern const int a, b, c, d;

int main()
{
	setlocale(LC_ALL, "RU");

	//----2-----<<
	int A;
	cout << "Введите целое число A = ";
	cin >> A;
	A = (A <= 21) ? 21 - A : (A - 21) * 2;
	cout << "Искомое число = " << A << endl << endl;
	//----2----->>

	//----3-----<<
	int box[3][3][3] =
	{
		{
			{1, 1, 1}
			,{1 ,1 ,1}
			,{1, 1, 1}
		}
		,{
			{1, 1, 1}
			,{1 ,2 ,1}
			,{1, 1, 1}
		}
		,{
			{1, 1, 1}
			,{1 ,1 ,1}
			,{1, 1, 1}
		}
	};
	int* ptrBox = &box[1][1][1];
	cout << "В цетре куба лежит: " << *ptrBox << endl << endl;
	//----3----->>

	//----4-----<<
	float res;
	res = a * (b + (static_cast<float>(c) / d));
	cout << "a = " << a << " b = " << b << " c = " << c << " d = " << d << endl;
	cout << "Результат выражения a * (b + (c / d)) = " << res << endl;
	//----4----->>
}
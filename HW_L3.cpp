#include <iostream>

using namespace std;

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
	cout << "В цетре куба лежит: " << *ptrBox << endl;
	//----3----->>
}
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	//----2-----<<
	int A;
	cout << "������� ����� ����� A = ";
	cin >> A;
	A = (A <= 21) ? 21 - A : (A - 21) * 2;
	cout << "������� ����� = " << A << endl;
	//----2----->>
}
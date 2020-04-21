#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	
	cout << "Программу сделала Белевцева Дарья Юрьевна студент группы УМЛ-112\n";
	cout << "Программа для нахождения трёхзначных чисел с неповторяющимися цифрами\n";
	
	int k = 0;
	do
	{
		for (int i = 100; i < 1000; i++)
		{
			int d1 = i / 100 % 10;
			int d2 = i / 10 % 10;
			int d3 = i % 10;
			if (d1 != d2 && d1 != d3 && d2 != d3)
			{
				cout << i << " ";
			}
		}
		cout << "\nПовторить (1)? ";
		cin >> k;
	} while (k == 1);

	system("pause");

	return 0;
}

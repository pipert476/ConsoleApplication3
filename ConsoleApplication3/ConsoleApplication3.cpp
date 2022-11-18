

#include <iostream>
#include <locale>
#include <conio.h>
#include <cmath>

using namespace std;



int main()
{
	setlocale(0, ".1251");

	
	cout << "\n Пишете число у радiанах, натискаєте вiдступ, а потiм ENTER \n\n";

	int x;

	x = 0;

	while (true) 
	{

		cin >> x;

		cout << x * 180 / 3.14159265359;

	}


}


#include "io.h"
void Level01()
{

	int Num, Array[100] = {};
	cin >> Num;

	for (int i = 0; i < Num; i++)
	{

		cin >> Array[i];
	}

	int Compare, Count = 0;
	cin >> Compare;

	for (int i = 0; i < Num; i++)
	{

		if (Compare == Array[i]) Count++;
	}

	cout << Count;

}



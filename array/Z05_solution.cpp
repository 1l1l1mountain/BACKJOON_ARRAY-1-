#include "io.h"
void Level05() 
{
	int Max=0, Idx=0;
	int Array[9];

	for (int i = 0; i < 9; i++)
	{

		cin >> Array[i];
	}
	for (int i = 0; i < 9; i++)
	{

		if (Max < Array[i])
		{

			Max = Array[i];
			Idx = i+1;
		}

	}


	cout << Max<<endl;
	cout << Idx<<endl;
}
#include "io.h"
void AscendingOrder(int *Array, int Num) {
	int Max, Tmp;
	for(int i= Num-1 ;i>=1;i--)
	{
	
		Max = i;
		for (int j = i - 1; j >= 0; j--) 
		{
			
			if (Array[Max] < Array[j]) Max = j;
		}
		Tmp = Array[i];
		Array[i] = Array[Max];
		Array[Max] = Tmp;

	}
	   
}
void Level04() 
{
	int Num;
	int* Array = 0;
	
	cin >> Num;
	Array = new int[Num];
	
	for (int i = 0; i < Num; i++) 
	{
	
		cin >> Array[i];
	}

	//AscendingOrder(Array, Num);
	//cout << Array[0] << " " << Array[Num - 1];

	int Max =Array[0], Min= Array[0];
	
	for (int i = 0; i < Num; i++)
	{

		if (Array[i]>Max)
		{
			Max = Array[i];
		}
		if (Array[i] < Min)
		{
			Min = Array[i];
		}
	}

	cout << Min << " " << Max;


	delete[]Array;
}
#include <stdio.h>

int main()
{
	int zahl_ganz = 5;
	float zahl_komma = 5.5;
	char buchstabe = 's';
	int Zahl_array [] = {5,3,6,9,7,5};

	printf("%i ist eine Zahl \n", zahl_ganz);
	printf("%f ist auch eine Zahl \n", zahl_komma);
	printf("%c ist keine Zahl \n", buchstabe);
	
	printf("Ein Beispiel für ein Array:\n");	
	for (int i=0 ; i<6 ; i++)
	{
		printf("%i \n", Zahl_array[i]);
	}

	return 0;
}	

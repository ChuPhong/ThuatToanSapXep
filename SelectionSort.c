#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 1
#define MAX 100
#define ARRAY_LENGTH 10

void MakeArray(int list[], int length)
{
	srand((unsigned)time(0));
	for (int i = 0; i < length; ++i)
	{
		list[i] = rand() % (MAX - MIN) + MIN;
	}
}

void Display(int list[], int length)
{
	for (int i = 0; i < length; ++i)
	{
		printf("%d\t", list[i]);
	}
	printf("\n");
}

void Swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

void SelectionSort(int list[], int length)
{
	for (int i = 0; i < length - 1; ++i)
	{
		int min = i;
		for (int j = i + 1; j < length; ++j)
		{
			if (list[j] < list[min])
			{
				min = j;
			}
		}
		Swap(&list[min], &list[i]);
	}
}

int main()
{
	int list[ARRAY_LENGTH];

	MakeArray(list, ARRAY_LENGTH);

	printf("Truoc khi sap xep: ");

	Display(list, ARRAY_LENGTH);

	printf("Sau khi sap xep: ");

	SelectionSort(list, ARRAY_LENGTH);

	Display(list, ARRAY_LENGTH);

	getchar();

	return 0;
}

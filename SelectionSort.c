#include <stdio.h>
#include <stdlib.h>

void Swap(int *numberA, int *numberB)
{
	int c = *numberA;
	*numberA = *numberB;
	*numberB = c;
}

void SelectionSort(int number[], int length)
{
	for (int i = 0; i < length - 1; ++i)
	{
		int min = i;
		for (int j = i + 1; j < length; ++j)
		{
			if (number[j] < number[min])
			{
				min = j;
			}
		}
		Swap(&number[min], &number[i]);
	}
}

void Output(int number[], int length)
{
	for (int i = 0; i < length; ++i)
	{
		printf("%d\t", number[i]);
	}
}

void MakeArray(int number[], int length)
{
	srand(0);
	for (int i = 0; i < length; ++i)
	{
		number[i] = rand() % 51 + 0;
	}
}

int main()
{
	int number[10];
	
	// Tạo mảng ngẫu nhiên
	MakeArray(number, 10);

	// Trước khi sắp xếp
	printf("Truoc khi sap xep:\t");
	
	Output(number, 10);

	// Sắp xếp
	SelectionSort(number, 10);

	// Sau khi sắp xếp
	printf("\nSau khi sap xep:\t");
	
	Output(number, 10);

	// Dừng chương trình
	getchar();

	return 0;
}
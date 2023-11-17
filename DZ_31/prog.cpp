#include <iostream>
#include "function.h"

using namespace std;

int main()
{
#ifdef INTEGER

	const int size = 15;
	int arr[size];
	RandomArray(arr, size);
	ShowArray(arr, size);
	cout << "Min int: " << MinArray(arr, size) << endl;
	cout << "Max int: " << MaxArray(arr, size) << endl;
	SortArray(arr, size);
	cout << "Sorted int array:\n";
	ShowArray(arr, size);
	EditArray(arr, size);
	cout << "Edited int array:\n";
	ShowArray(arr, size);

#endif // INTEGER

#ifdef DOUBLE

	const int size = 15;
	double arr[size];
	RandomArray(arr, size);
	ShowArray(arr, size);
	cout << "Min double: " << MinArray(arr, size) << endl;
	cout << "Max double: " << MaxArray(arr, size) << endl;
	SortArray(arr, size);
	cout << "Sorted double array:\n";
	ShowArray(arr, size);
	EditArray(arr, size);
	cout << "Edited double array:\n";
	ShowArray(arr, size);

#endif // DOUBLE

#ifdef CHAR

	const int size = 15;
	char arr[size];
	RandomArray(arr, size);
	ShowArray(arr, size);
	cout << "Min char: " << MinArray(arr, size) << endl;
	cout << "Max char: " << MaxArray(arr, size) << endl;
	SortArray(arr, size);
	cout << "Sorted char array:\n";
	ShowArray(arr, size);
	EditArray(arr, size);
	cout << "Edited char array:\n";
	ShowArray(arr, size);

#endif // CHAR

	return 0;
}
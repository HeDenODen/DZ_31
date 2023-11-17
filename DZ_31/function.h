#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
#define INTEGER
//#define DOUBLE
//#define CHAR

using namespace std;

#ifdef INTEGER

#define RandomArray RandomArrayInt
#define ShowArray ShowArrayInt
#define MinArray MinArrayInt
#define MaxArray MaxArrayInt
#define SortArray SortArrayInt
#define EditArray EditArrayInt

void RandomArrayInt(int* arr, int size);
void ShowArrayInt(int* arr, int size);
int MinArrayInt(int* arr, int size);
int MaxArrayInt(int* arr, int size);
void SortArrayInt(int* arr, int size);
void EditArrayInt(int* arr, int size);

void RandomArrayInt(int* arr, int size)
{
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 50;
	}
}

void ShowArrayInt(int* arr, int size)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int MinArrayInt(int* arr, int size)
{
	int min = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

int MaxArrayInt(int* arr, int size)
{
	int max = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

void SortArrayInt(int* arr, int size)
{
	int temp;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void EditArrayInt(int* arr, int size)
{
	int UserChoice, index, new_v;
	do {
		cout << "Select an action:\n";
		cout << "1 - Edit array\n";
		cout << "0 - Exit\n";
		cout << "Your choice: ";
		cin >> UserChoice;
		switch (UserChoice)
		{
		case 1:
			cout << "Enter array index (0 - " << size - 1 << "): ";
			cin >> index;
			cout << "Enter new array value: ";
			cin >> new_v;
			arr[index] = new_v;
			break;
		case 0:
			cout << "Bye!" << endl;
			break;
		default:
			cout << "Invalid command!" << endl;
			break;
		} 
	} while (UserChoice != 0);
}
#endif // INTEGER

#ifdef DOUBLE

#define RandomArray RandomArrayDouble
#define ShowArray ShowArrayDouble
#define MinArray MinArrayDouble
#define MaxArray MaxArrayDouble
#define SortArray SortArrayDouble
#define EditArray EditArrayDouble

void RandomArrayDouble(double* arr, int size);
void ShowArrayDouble(double* arr, int size);
double MinArrayDouble(double* arr, int size);
double MaxArrayDouble(double* arr, int size);
void SortArrayDouble(double* arr, int size);
void EditArrayDouble(double* arr, int size);

void RandomArrayDouble(double* arr, int size)
{
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = 0.001* (rand() % 1000);
	}
}

void ShowArrayDouble(double* arr, int size)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

double MinArrayDouble(double* arr, int size)
{
	double min = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

double MaxArrayDouble(double* arr, int size)
{
	double max = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

void SortArrayDouble(double* arr, int size)
{
	double temp;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void EditArrayDouble(double* arr, int size)
{
	int UserChoice, index;
	double new_v;
	do {
		cout << "Select an action:\n";
		cout << "1 - Edit array\n";
		cout << "0 - Exit\n";
		cout << "Your choice: ";
		cin >> UserChoice;
		switch (UserChoice)
		{
		case 1:
			cout << "Enter array index (0 - " << size - 1 << "): ";
			cin >> index;
			cout << "Enter new array value: ";
			cin >> new_v;
			arr[index] = new_v;
			break;
		case 0:
			cout << "Bye!" << endl;
			break;
		default:
			cout << "Invalid command!" << endl;
			break;
		}
	} while (UserChoice != 0);
}

#endif // DOUBLE

#ifdef CHAR

#define RandomArray RandomArrayChar
#define ShowArray ShowArrayChar
#define MinArray MinArrayChar
#define MaxArray MaxArrayChar
#define SortArray SortArrayChar
#define EditArray EditArrayChar

void RandomArrayChar(char* arr, int size);
void ShowArrayChar(char* arr, int size);
char MinArrayChar(char* arr, int size);
char MaxArrayChar(char* arr, int size);
void SortArrayChar(char* arr, int size);
void EditArrayChar(char* arr, int size);

void RandomArrayChar(char* arr, int size)
{
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = 65 + rand() % 58;
	}
}

void ShowArrayChar(char* arr, int size)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

char MinArrayChar(char* arr, int size)
{
	double min = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

char MaxArrayChar(char* arr, int size)
{
	double max = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

void SortArrayChar(char* arr, int size)
{
	char temp;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void EditArrayChar(char* arr, int size)
{
	int UserChoice, index;
	char new_v;
	do {
		cout << "Select an action:\n";
		cout << "1 - Edit array\n";
		cout << "0 - Exit\n";
		cout << "Your choice: ";
		cin >> UserChoice;
		switch (UserChoice)
		{
		case 1:
			cout << "Enter array index (0 - " << size - 1 << "): ";
			cin >> index;
			cout << "Enter new array value: ";
			cin >> new_v;
			arr[index] = new_v;
			break;
		case 0:
			cout << "Bye!" << endl;
			break;
		default:
			cout << "Invalid command!" << endl;
			break;
		}
	} while (UserChoice != 0);
}

#endif //CHAR
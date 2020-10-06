#include <iostream>
using namespace std;

void fSingleArray(int* const singleArray, int const size)
{

	for (int i = 0; i < size; i++)
	{
		singleArray[i] = rand() % 20;
	}
}

void fPrintSingleArray(int const *singleArray, int const size)
{
	for (int i = 0; i < size; i++)
	{
		cout << singleArray[i] << "\t";
		cout << endl;
	};
}

void fDoubleArray(int** doubleArray, int const *rows, int const *cols)
{

	for (int i = 0; i < *rows; i++)
	{
		for (int j = 0; j < *cols; j++)
		{
			doubleArray[i][j] = rand() % 20;
		}
	}
}

void fPrintDoubleArray(int** doubleArray, int const *rows, int const *cols)
{
	for (int i = 0; i < *rows; i++)
	{
		for (int j = 0; j < *cols; j++)
		{
			cout << doubleArray[i][j] << "\t";
		}
		cout << endl;
	}
}

int main()
{
	int SingleArray, DoubleArray;
	int a, rows, cols;
	int v;
	cout << "1 - SingleArray \t";
	cout << "2 - DoubleArray" << endl;
	cin >> v;
	cout << endl;
	switch (v)
	{
		case 1:
		{
			cout << "Introduceti de cate cifre trebuieste masivul:\t";
			cin >> a;
			fSingleArray(&SingleArray, a);
			fPrintSingleArray(&SingleArray, a);
		}
		break;
	
		case 2:
		{
		cout << "Introduceti de cate randuri va fi masivul:" << endl;
		cin >> rows;
		cout << "Introduceti de cate coloane va fi masivul:" << endl;
		cin >> cols;
		fDoubleArray(&DoubleArray,&rows,&cols);
		fPrintDoubleArray(&DoubleArray , &rows, &cols);
		}
		break;
    }
 return 0;
}
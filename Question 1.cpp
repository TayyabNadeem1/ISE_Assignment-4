//#include<iostream>
#include<fstream>
#include<ctime>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<cstring>

using namespace std;

void MixUp(char **arr, int size, int count)
{

	for (int i = 0; i < count; i++)
	{
		if (i % 2 == 0)
			swap(arr[i], arr[size - i - 1]);
	}

	for (int i = 0; i < size; i++)
	{

		for (int j = 0, k = size - 1; j < size; j++, k--)
		{
			char temp = arr[i][j];
			arr[i][j] = arr[i][k];
			arr[i][k] = temp;
		}

	}
}
int main()
{

	string line_1;
	//string line = "wordsearch";
	int count = 0;

	ifstream fin;
	fin.open("structure.txt");
	int size = 11;
	int size_1 = 0;
	char** arr = new char*[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = new char[size];
		for (int j = 0; j < size; j++)
		{

			int random = (rand() % 25) + 97;
			arr[i][j] = random;

		}
	}

	if (fin.is_open())
	{

		while (getline(fin, line_1))
		{
			size_1 = line_1.length() - 1;

			if (count % 2 == 0)
			{
				for (int i = 0; i < size; i++)
				{
					if (i < size_1)
						arr[count][i] = line_1[i];
				}
			}
			else
			{
				size_1 = line_1.length() - 1;
				int start = 0;
				int end = size_1 - 1;
				while (start < end)
				{
					char temp = line_1[start];
					line_1[start] = line_1[end];
					line_1[end] = temp;
					start++;
					end--;
				}
				for (int i = 0; i < size; i++)
				{
					if (i < size_1)
						arr[count][i] = line_1[i];

				}
			}
			count++;

		}
	}


	MixUp(arr, size, count);

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
	for (int i = 0; i < size; i++)
	{
		delete[]arr[i];
	}
	delete arr;
	return 0;
}

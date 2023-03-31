#include <iostream>
using namespace std;

//array of integres to hold values
int arr[20];
int cmp_count = 0; // number of comparasion
int mov_count = 0; // number of movement 
int n;
void input() {
	while (true)
	{
		cout << "masukan panjang element array : ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\n maksimum panjang array adalah 20" << endl;
	}


	cout << "\n-------------------" << endl;
	cout << "\nEnter array element" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + i) << ">";
		cin >> arr[i];
	}
}

//swaps elements st index with the element at index
void swap(int x, int y)
{
	int temp;

	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void q_short(int low, int high)
{
	int pivot, i, j;
	if (low > high)                                                 // Langkah algoritma No. 1
		return;

	// Partition the list into two parts:
	// One containing element less that or equal to privat
	// Outher containing elements greater than pivot

	pivot = arr[low];                                               // Langkah algoritma No. 2

	i = low + 1;                                                    // Langkah algoritma No. 3
	j = high;                                                       // Langkah algoritma No. 4




















}
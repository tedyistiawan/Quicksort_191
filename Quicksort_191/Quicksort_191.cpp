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
	if (low > high)  // Langkah ke 1
		return;

	// Partition the list into two parts:
	// One containing element less that or equal to privat
	// Outher containing elements greater than pivot

	pivot = arr[low]; // Langkah ke 2

	i = low + 1; // Langkah ke 3
	j = high;  // Langkah ke 4


	while (i <= j) // Langkah ke 10
	{
		// search for an element greather than pivot
		while ((arr[i] <= pivot) && (i <= high)) // Langkah ke 5
		{
			i++; // Langkah ke 6
			cmp_count++;
		}
		cmp_count++;

		// search for an element less than or equal to pivot
		while ((arr[j] > pivot) && (j >= low))                       // Langkah ke 7
		{
			j--; // Langkah ke 8
			cmp_count++;
		}
		cmp_count++;
		// if the greater element is on the left of the element
		if (i < j) // Langkah ke 9
		{
			// swap the element at index i with the element at index j
			swap(i, j);
			mov_count++;
		}
	}

	// j now containt the index of the last element in the sorted list
	if (low < j) // Langkah ke 11
	{
		// move the pivot to its correct position in the list
		swap(low, j);
		mov_count++;
	}
	// sort the list on the left pivot using quick sort
	q_short(low, j - 1); // Langkah ke 12

	// Sort the list on the right of pivot using quick sort
	q_short(j + 1, high); // Langkah ke 13 

}

void display () {
	cout << "\n----------" << endl;
	cout << "Sorted Array" << endl;
	cout << "\n----------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\n\nNumber of comparasion: " << cmp_count << endl;
	cout << "Number of data movements: " << mov_count << endl;
}

int main() {
	input();
	q_short(0, n - 1);          // Sort the array using quick sort 
	display();
	system("pause");

	return 0;
}
















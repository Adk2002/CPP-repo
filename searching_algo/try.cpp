#include <iostream>
using namespace std;
class search
{
public:
	int Linear(int arr[], int num, int key)
	{
		for (int i = 0; i <= num; i++)
		{
			if (arr[i] == key)
			{
				return i;
			}
		}
		return -1;
	}

	int Binary(int arr[], int num, int key)
	{
		int start = 0;
		int end = num;
		while (start <= end)
		{
			int mid = (start + end) / 2;

			if (arr[mid] == key)
				return mid;

			else if (arr[mid] > key)
			{
				end = mid - 1;
			}
			else
				start = mid - 1;
		}

		return -1;
	}
};
int main()
{
	search s;
	int size, key;
	cout << "\nEnter the number of elements: ";
	cin >> size;

	int arr[size];
	cout << "\nenter the elements: ";
	for (int q = 0; q <= size; q++)
	{
		cin >> arr[q];
	}
	cout << "\nEnter the element to searched: ";
	cin >> key;

	char zum;
	cout << "What search: ";
	cin >> zum;
	switch (zum)
	{
	case 'a':
		/* code */
		cout << "Index: " << s.Binary(arr, size, key);
		break;
	case 'b':
		cout << "Index: " << s.Linear(arr, size, key);
		break;
	}
	return 0;
}
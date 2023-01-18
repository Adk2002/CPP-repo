#include <iostream>
using namespace std;
int main()
{
	int arr1[10], arr2[10], arr3[10];
	int inum, num, num2, m, index = 0;
	int index1 = 0, index2 = 0;

	cout << "Enter the number of element in arr1: ";
	cin >> num;

	cout << "Enter the element of the first array: ";
	for (inum = 0; inum < num; inum++)
	{
		cin >> arr1[inum];
	}

	cout << "Enter the number of elements in arr2: ";
	cin >> num2;

	cout << "Enter the element of the second array: ";
	for (inum = 0; inum < num2; inum++)
	{
		cin >> arr2[inum];
	}
	m = num + num2; // to add the sorted arrays

	while (arr1[index1] < num && arr2[index2]< num2)
	{
		if (arr1[index1] < arr2[index2])
		{
			arr3[index] = arr1[index1];
			index1++;
		}
		else
		{
			arr3[index] = arr2[index2];
			index2++;
		}
		index++;
	}

	if (index1 == num)
	{
		while (index2 < num2)
		{
			arr3[index] = arr2[index2];
			index2++;
			index++;
		}
	}
	else if (index2 == num2)
	{
		while (index1 < num)
		{
			arr3[index] = arr1[index1];
			index1++;
			index++;
		}
	}

	cout << "\nThe contents of the merge arrays are: ";
	for (inum = 0; inum < m; inum++)
	{
		cout << "\n Arr[" << inum << "] = " << arr3[inum];
	}
	return 0;
}
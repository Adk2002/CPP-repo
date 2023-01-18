/*********************
This is a program to merge two sorted arrays
**********************/
#include <iostream>
using namespace std;
int main()
{
  int arr[10], arr2[10], arr3[10];
  int inum, num, num2, m, index = 0;
  int index_first = 0, index_second = 0;
  cout << "Enter the  number of elements in arr1: ";
  cin >> num;

  cout << "Enter the elements of first array: ";
  for (inum = 0; inum < num; inum++)
  {
    cin >> arr[inum];
  }

  cout << "\nEnter the number of elements in arr2: ";
  cin >> num2;

  cout << "\nEnter the elements of the second array: ";
  for (inum = 0; inum < num2; inum++)
  {
    cin >> arr2[inum];
  }
  m = num + num2;

  //The main merge logic start from here
  while (index_first < num && index_second < num2)
  {
    if (arr[index_first] < arr2[index_second])
    {
      arr3[index] = arr[index_first];
      index_first++;
    }
    else
    {
      arr3[index] = arr2[index_second];
      index_second++;
    }
    index++;
  }
  /*if elements of the first array are over and
  the second array has some elements*/

  if (index_first == num)
  {
    while (index_second < num2)
    {
      arr3[index] = arr2[index_second];
      index_second++;
      index++;
    }
  }
  /*if elements of the second array are over and
 the first array has some elements*/

  else if(index_second == num2)
  {
    while (index_first < num)
    {
      arr3[index] = arr[index_first];
      index_first++;
      index++;
    }
  }

  cout<<"\nThe contents of the merged array are: ";
  for(inum=0;inum<m;inum++)
  {
    cout<<"\n Arr["<<inum<<"] = "<<arr3[inum];
  }
  return 0;
}
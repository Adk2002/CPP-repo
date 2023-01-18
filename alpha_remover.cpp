#include <iostream>
using namespace std;
int main()
{
  /*To convert any unreadable data to readable*/
  char line[100], alphbaticalstring[100];
  int j = 0;
  cout << "Enter a sting:";
  cin.getline(line, 100);
  for (int i = 0; line[i] != '\0'; ++i)
  {
    if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) 
    /*the main argument and this will
    remove all char except alphabet. eg p1@ro&gr@#a%m@#E^%r*/
    {
      alphbaticalstring[j++] = line[i];
    }
  }
  alphbaticalstring[j] = '\0';

  cout << "Output String: " << alphbaticalstring;
  return 0;
}

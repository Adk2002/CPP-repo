//<fstream> directory is used to both read and write from/ to files
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ofstream file_;
  file_.open("mytext.txt");
  file_.close();
  std::cin.get();
  return 0;
}

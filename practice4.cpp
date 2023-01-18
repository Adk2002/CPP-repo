#include <iostream>
using namespace std;
int main()
{
    char line[10], alpha[10];
    int j = 0;
    cout << "\nEnter string: ";
    cin.getline(line, 100);

    for (int i = 0; line[i] != '\0'; i++)
    {
        if ((line[i] >= 'a' && line[i] <= 'z') ||
            (line[i] >= 'A' && line[i] <= 'Z'))
        {
            alpha[j++] = line[i];
        }
    }
    alpha[j] = '\0';

    cout << "Output String: " << alpha;
    return 0;
}
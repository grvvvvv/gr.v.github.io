#include <iostream>
using namespace std;
int main()
{
    const int size = 5;
    float marks[size];
    int i;
    for (i = 0; i < size; i++)
    {
        cout << "enter marks of student : " << i + 1 << "\n"
             << endl;
        cin >> marks[i];
    }
    cout << "\n";
    for (i = 0; i < size; i++)
    {
        cout << "marks[" << i << "] = " << marks[i] << "\n"
             << endl;
    }
    return 0;
}
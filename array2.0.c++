#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    string name[size];
    int rollno[size];
    float marks[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter name of student " << i + 1 << ": " << endl;
        cin >> name[i];
        cout << "Enter roll number of student " << i + 1 << ": " << endl;
        cin >> rollno[i];
        cout << "Enter marks of student " << i + 1 << ": " << endl;
        cin >> marks[i];
        cout << "\n\n";
    }

    cout << "\nResult:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Student [" << i + 1 << "] :" << endl;
        cout << "Name: " << name[i] << endl;
        cout << "Roll No: " << rollno[i] << endl;
        cout << "Marks: " << marks[i] << endl
             << endl;
    }

    return 0;
}

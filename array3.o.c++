#include <iostream>
using namespace std;

int main()
{
    const int size = 10;
    string name[size];
    int rollno[size];
    int marks[size];

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

    int callRoll;
    cout << "Enter roll number to display result: " << endl;
    cin >> callRoll;
    cout << "\n";

    for (int i = 0; i < size; i++)
    {
        if (rollno[i] == callRoll)
        {
            cout << "Result for roll no " << callRoll << ":\n";
            cout << "Name: " << name[i] << endl;
            cout << "Marks: " << marks[i] << endl;
        }
    }
    return 0;
}
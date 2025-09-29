#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int percent;

    void getData()
    {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter percent: ";
        cin >> percent;
    }

    void showResult()
    {
        cout << "Name: " << name << endl;
        cout << "percent: " << percent << endl;

        if (percent >= 40)
        {
            cout << "Result: Pass" << endl;
        }
        else
        {
            cout << "Result: Fail" << endl;
        }
    }
};

int main()
{

    Student s1;
    s1.getData();
    s1.showResult();

    return 0;
}

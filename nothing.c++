#include <iostream>
using namespace std;

class student
{
public:
    int age;
    string name;

    void getdetails()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your age: ";
        cin >> age;
    }

    void showdetails()
    {
        cout << "Your name: " << name << endl;
        cout << "Your age: " << age << endl;
    }
};

int main()
{
    student s[15];
    int option;

    for (int i = 0; i < 15; i++)
    {
        cout << "\n- Student " << i + 1 << " -\n";

        s[i].getdetails();
        s[i].showdetails();

        if (s[i].age >= 18)
        {
            cout << "You are above 18." << endl;
            cout << "Are you sure? (1 = Yes, 2 = No): ";
            cin >> option;
        }
        else
        {
            cout << "You are below 18." << endl;
        }

        switch (option)
        {
        case 1:
            cout << "You are eligible." << endl;
            break;
        case 2:
            cout << "You are not eligible." << endl;
            break;
        default:
            cout << "May God help you." << endl;
            break;
        }
    }

    return 0;
}

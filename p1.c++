#include <iostream>
using namespace std;
class google
{
private:
    string name;
    long int phno;
    string address;
    string gender;

public:
    void input()
    {
        cout << "enter your name : " << endl;
        cin >> name;
        cout << "your phno : " << endl;
        cin >> phno;
        cout << "your address : " << endl;
        cin >> address;
        cout << "your gender : " << endl;
        cin >> gender;
    }

    void details()
    {
        cout << "welcome " << name << endl;
        cout << "your phno is " << phno << endl;
        cout << "your address is " << address << endl;
        cout << "your gender is " << gender << endl;
    }
};
int main()
{
    google user2;
    user2.input();
    user2.details();
    return 0;
}
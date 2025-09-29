#include <iostream>
using namespace std;
class result
{
public:
    int percent;
    void enter()
    {
        cout << "enter your mark " << endl;
        cin >> percent;
    }
};
int main()
{
    result student5;
    student5.enter();
    if (student5.percent >= 95)
    {
        cout << "A+" << endl;
    }
    else if (student5.percent >= 85)
    {
        cout << "A" << endl;
    }
    else if (student5.percent >= 75)
    {
        cout << "B+" << endl;
    }
    else if (student5.percent >= 60)
    {
        cout << "B" << endl;
    }
    else if (student5.percent >= 50)
    {
        cout << "C+" << endl;
    }
    else if (student5.percent >= 40)
    {
        cout << "C" << endl;
    }
    else
    {
        cout << "rip toi failed" << endl;
    }
    return 0;
}
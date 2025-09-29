#include <iostream>
using namespace std;

int i, hour, minute;

int main()
{
    cout << "What's the time right now (in 24hr format - hour and minute): ";
    cin >> hour;
    cin.ignore();
    cin >> minute;

    if (minute >= 45)
        hour++;

    for (i = 1; i <= hour; i++)
    {
        if (i < 12)
            cout << "Good morning" << endl;
        else if (i < 16)
            cout << "Good afternoon" << endl;
        else
            cout << "Good evening" << endl;
    }

    return 0;
}

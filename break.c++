#include <iostream>
using namespace std;
int i;
int main()
{
    for (i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            break;
        }
        cout << "a";
    }
    return 0;
}
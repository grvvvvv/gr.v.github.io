#include <iostream>
using namespace std;

float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float divi(float a, float b) { return b ? a / b : (cout << "Error\n", 0.0f); }

int main()
{
    float x, y;
    int choose;

    while (true)
    {
        cout << "\n1.Add\n2.Sub\n3.Mul\n4.Div\n5.Exit\n\nChoose: ";
        cin >> choose;
        if (choose == 5)
            break;

        cout << "Enter two numbers: ";
        cin >> x >> y;

        if (choose == 1)
            cout << add(x, y);
        else if (choose == 2)
            cout << sub(x, y);
        else if (choose == 3)
            cout << mul(x, y);
        else if (choose == 4)
            cout << divi(x, y);
        else
            cout << "Invalid";
        cout << endl;
    }
}

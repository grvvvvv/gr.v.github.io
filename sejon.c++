#include <iostream>
using namespace std;

int main()
{
    string season;
    cout << "Enter the season (Summer, Monsoon, Winter, Spring, Pre-Monsoon): ";
    getline(cin, season);

    if (season == "summer")
    {
        cout << "Fruit: Mango";
    }
    else if (season == "monsoon")
    {
        cout << "Fruit: Custard Apple";
    }
    else if (season == "winter")
    {
        cout << "Fruit: Orange";
    }
    else if (season == "pre-monsoon")
    {
        cout << "Fruit: Pineapple";
    }
    else if (season == "spring")
    {
        cout << "Fruit: Litchi";
    }
    else
    {
        cout << "It's better to find it yourself for the specific season, -- since I haven't heard of this one.";
    }
    return 0;
}

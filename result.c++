#include <iostream>
using namespace std;

class result
{
private:
    int chemistry;
    int physics;
    int percent;
    int english;
    int computer;
    int verification;
    float percentage;

public:
    void marks()
    {
        cout << "enter your chemistry marks : " << endl;
        cin >> chemistry;
        cout << "enter your physics marks : " << endl;
        cin >> physics;
        cout << "enter your maths marks : " << endl;
        cin >> percent;
        cout << "enter your english marks : " << endl;
        cin >> english;
        cout << "enter your computer marks : " << endl;
        cin >> computer;

        cout << "just verify your marks" << endl;
        cout << "chemistry = " << chemistry << endl;
        cout << "physics = " << physics << endl;
        cout << "maths = " << percent << endl;
        cout << "english = " << english << endl;
        cout << "computer = " << computer << endl;
        cout << "---if its correct, press anything then enter to continue---" << endl;
        cin >> verification;

        int total = chemistry + physics + percent + english + computer;
        cout << "Total marks = " << total << endl;

        percentage = (total / 500.0f) * 100;
        cout << "Percentage = " << percentage << " %" << endl;
    }

    float getPercentage()
    {
        return percentage;
    }
};

int main()
{
    result student;
    student.marks();

    float percent = student.getPercentage();

    if (percent >= 85)
        cout << "Your grade is A+" << endl;
    else if (percent >= 75)
        cout << "Your grade is A" << endl;
    else if (percent >= 70)
        cout << "Your grade is B+" << endl;
    else if (percent >= 60)
        cout << "Your grade is B" << endl;
    else if (percent >= 50)
        cout << "Your grade is C+" << endl;
    else if (percent >= 40)
        cout << "Your grade is C" << endl;
    else
        cout << "RIP, you are failed";

    return 0;
}
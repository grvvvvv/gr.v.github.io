#include <iostream>
using namespace std;

class Account
{
public:
    string name, dob, address, fatherName, gender;
    string phone, aadhar;
    string username, password;
    int accountNumber;
    int balance;

    Account()
    {
        balance = 0;
    }

    // Create account using cin
    void createAccount(int userNum, int accNum)
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Date of Birth (DD/MM/YYYY): ";
        cin >> dob;

        cout << "Enter Address: ";
        cin >> address;

        cout << "Enter Father's Name: ";
        cin >> fatherName;

        cout << "Enter Gender: ";
        cin >> gender;

        cout << "Enter Phone Number: ";
        cin >> phone;

        cout << "Enter Aadhar Number: ";
        cin >> aadhar;

        username = name + to_string(100 + userNum);
        cout << "Your Username is: " << username << endl;

        cout << "Create Password: ";
        cin >> password;

        accountNumber = accNum;
        cout << "Your Account Number is: " << accountNumber << endl;

        cout << "\nAccount Created Successfully! Thank You.\n";

        // Show all details after creation
        showDetails();
    }

    void creditMoney(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Money Credited Successfully!\n";
            cout << "Current Balance: " << balance << endl;
        }
        else
        {
            cout << "Invalid amount!\n";
        }
    }

    void withdrawMoney(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal Successful!\n";
            cout << "Current Balance: " << balance << endl;
        }
        else
        {
            cout << "Insufficient Balance or Invalid amount!\n";
        }
    }

    void showDetails()
    {
        cout << "\n----- Account Details -----\n";
        cout << "Name: " << name << endl;
        cout << "DOB: " << dob << endl;
        cout << "Address: " << address << endl;
        cout << "Father's Name: " << fatherName << endl;
        cout << "Gender: " << gender << endl;
        cout << "Phone Number: " << phone << endl;
        cout << "Aadhar Number: " << aadhar << endl;
        cout << "Username: " << username << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Account accounts[100];
    int totalUsers = 0;
    int accountSeed = 500000;
    int choice;
    string username, password;

    while (true)
    {
        cout << "\n=== ATM Menu ===\n";
        cout << "1. Create Account\n";
        cout << "2. Credit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Show Account Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choose: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            accounts[totalUsers].createAccount(totalUsers, accountSeed + totalUsers);
            totalUsers++;
            break;

        case 2:
        {
            cout << "Enter Username: ";
            cin >> username;
            cout << "Enter Password: ";
            cin >> password;

            bool found = false;
            for (int i = 0; i < totalUsers; i++)
            {
                if (accounts[i].username == username && accounts[i].password == password)
                {
                    int amt;
                    cout << "Enter Amount to Credit: ";
                    cin >> amt;
                    accounts[i].creditMoney(amt);
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Invalid username or password!\n";
            break;
        }

        case 3:
        {
            cout << "Enter Username: ";
            cin >> username;
            cout << "Enter Password: ";
            cin >> password;

            bool found = false;
            for (int i = 0; i < totalUsers; i++)
            {
                if (accounts[i].username == username && accounts[i].password == password)
                {
                    int amt;
                    cout << "Enter Amount to Withdraw: ";
                    cin >> amt;
                    accounts[i].withdrawMoney(amt);
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Invalid username or password!\n";
            break;
        }

        case 4:
        {
            cout << "Enter Username: ";
            cin >> username;
            cout << "Enter Password: ";
            cin >> password;

            bool found = false;
            for (int i = 0; i < totalUsers; i++)
            {
                if (accounts[i].username == username && accounts[i].password == password)
                {
                    accounts[i].showDetails();
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Invalid username or password!\n";
            break;
        }

        case 5:
            cout << "Thank you for using Gaurav's private ATM system.\n";
            return 0;

        default:
            cout << "Invalid choice! Please try again.\n";
        }
    }
}

#include <iostream>
using namespace std;
void add()
{
    double a, b;
    cout << endl;
    cout << "Enter the numbers to perform Addition." << endl;
    cin >> a >> b;
    cout << "The addition of the given numbers are\t" << a + b << "." << endl;
    cout << endl
         << endl;
}
void sub()
{
    double a, b;
    cout << endl;
    cout << "Enter the numbers to perform Subract." << endl;
    cin >> a >> b;
    cout << "The subraction of the given numbers are\t" << a - b << "." << endl;
    cout << endl
         << endl;
}
void multiply()
{
    double a, b;
    cout << endl;
    cout << "Enter the numbers to perform Multiplication." << endl;
    cin >> a >> b;
    cout << "The multiplication of the given numbers are\t" << a * b << "." << endl;
    cout << endl
         << endl;
}
void divide()
{
    double a, b;
    cout << endl;
    cout << "Enter the numbers to perform Division." << endl;
    cin >> a >> b;
    while (b == 0)
    {
        if (b == 0)
        {
            cout << "Denominator cannot be 0" << endl;
            cout << "Enter the value of denominator again" << endl;
            cin >> b;
        }
    }
    cout << "The division of the given numbers are\t" << a / b << "." << endl;
    cout << endl
         << endl;
}

int main()
{
    cout << endl;
    cout << "\t\t Welcome to the basic calculator" << endl;
    cout << " "
         << "\t \t  developed by Aatish!" << endl;
    cout << endl;
    cout << "Press 0 to quit the program" << endl;
    cout << "Press 1 for Addition" << endl;
    cout << "Press 2 for Subract" << endl;
    cout << "Press 3 for Multiply" << endl;
    cout << "Press 4 for divide" << endl;
    while (1)
    {
        int c;
        cout << "Press 5 to see choice" << endl;
        cout << "Enter the choice" << endl;
        cin >> c;
        int flag = 0;
        switch (c)
        {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            multiply();
            break;
        case 4:
            divide();
            break;
        case 0:
            flag = 1;
            break;
        case 5:
            cout << "The choice are" << endl;
            cout << "Press 0 to quit the program" << endl;
            cout << "Press 1 for Addition" << endl;
            cout << "Press 2 for Subract" << endl;
            cout << "Press 3 for Multiply" << endl;
            cout << "Press 4 for divide" << endl;
            break;
        default:
            cout << "***Wrong choice enter, Enter a valid choice***" << endl;
            break;
        }
        if (flag == 1)
            break;
    }
    cout << "***Code terminated***" << endl;
    cout << "****THANK YOU****" << endl;
    return 0;
}
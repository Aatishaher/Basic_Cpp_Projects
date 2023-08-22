#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand((unsigned)time(0));
    int number = 1 + (rand() % 100);
    cout << endl;
    cout << "\t \tWelcome to the guess the number game!" << endl;
    cout << endl;
    cout << "You need to guess the numbers between 1-100" << endl;
    int num;
    int t;
    bool flag;
    while (1)
    {
        cout << "\tSelect the difficulty level" << endl;
        cout << "1. easy\t 2.moderate\t 3.hard\t 0.end the game" << endl;
        int c;
        cin >> c;
        switch (c)
        {
        case 1:
            t = 20;
            cout << endl;
            cout << "You have 20 chances" << endl;
            while (t--)
            {
                cout << "enter the guess" << endl;
                cin >> num;
                cout << "\n"
                     << endl;
                if (num > number)
                {
                    cout << "The number is smaller than " << num << "try again" << endl;
                    cout << t << " chance left" << endl;
                }
                else if (num < number)
                {
                    cout << "The number is greater than " << num << "try again" << endl;
                    cout << t << " chance left" << endl;
                }
                else
                {
                    cout << "WON! Well Played the number is " << num << endl;
                    cout << "\n\n"
                         << endl;
                    break;
                }
            }
            if (num != number)
            {
                cout << "Lost!" << endl;
                cout << "chances over!" << endl;
                cout << "The number was " << number << endl;
                cout << "Play again!" << endl;
                cout << "\n\n"
                     << endl;
            }
            break;
        case 2:
            t = 7;
            cout << endl;
            cout << "you have 7 chances" << endl;
            while (t--)
            {
                cout << "enter the guess" << endl;
                cin >> num;
                cout << "\n"
                     << endl;
                if (num > number)
                {
                    cout << "The number is smaller than"
                         << " " << num << " "
                         << "try again" << endl;
                    cout << t << " chances left" << endl;
                }
                else if (num < number)
                {
                    cout << "The number is greater than "
                         << " " << num << " "
                         << "try again" << endl;
                    cout << t << " chances left" << endl;
                }
                else
                {
                    cout << "Well Played the number is "
                         << " " << num << endl;
                    cout << "\n\n"
                         << endl;
                    break;
                }
            }
            if (num != number)
            {
                cout << "Lost!" << endl;
                cout << "chances over!" << endl;
                cout << "The number was "
                     << " " << number << endl;
                cout << "Play again!" << endl;
                cout << "\n\n"
                     << endl;
            }
            break;
        case 3:
            t = 5;
            cout << endl;
            cout << "You have 5 chances" << endl;

            while (t--)
            {
                cout << "enter the guess" << endl;
                cin >> num;
                cout << "\n"
                     << endl;
                if (num > number)
                {
                    cout << "The number is smaller than "
                         << " " << num << " "
                         << "try again" << endl;
                    cout << t << " chance left" << endl;
                }
                else if (num < number)
                {
                    cout << "The number is greater than "
                         << " " << num << " "
                         << "try again" << endl;
                    cout << t << " chances left" << endl;
                }
                else
                {
                    cout << "Well Played the number is "
                         << " " << num << endl;
                    cout << "\n\n"
                         << endl;
                    break;
                }
            }
            if (num != number)
            {
                cout << "Lost!" << endl;
                cout << "chances over!" << endl;
                cout << "The number was "
                     << " " << number << endl;
                cout << "Play again!" << endl;
                cout << "\n\n"
                     << endl;
            }
            break;
        case 0:
            cout << "Game tarminated" << endl;
            cout << "THANKYOU" << endl;
            flag = true;
            break;
        default:
            cout << "Wrong choice entered" << endl;
            break;
        }
        if (flag == true)
        {
            break;
        }
    }

    return 0;
}
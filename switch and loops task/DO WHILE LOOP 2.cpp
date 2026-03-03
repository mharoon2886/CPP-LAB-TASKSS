
#include <iostream>
using namespace std;

int main()W
    int choice;

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Say Hello\n";
        cout << "2. Say Bye\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Hello!\n";
                break;
            case 2:
                cout << "Bye!\n";
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 3); // Repeat menu until user chooses 3

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int choice;

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Say Hello\n";
        cout << "2. Say Bye\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Hello!\n";
                break;
            case 2:
                cout << "Bye!\n";
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 3); // Repeat menu until user chooses 3

    return 0;
}

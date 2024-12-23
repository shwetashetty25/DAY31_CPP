#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    int age;

    try
    {
        cout << "Enter your age: ";
        cin >> age;

        // Check if the user is 18 or less
        if (age <= 18)
        {
            throw runtime_error("Access denied: You must be at least 18 years old.");
        }

        cout << "Access granted. Welcome!" << endl;
    }
    catch (const runtime_error &e)
    {
        cerr << e.what() << endl;
    }

    return 0;
}
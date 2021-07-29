#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age" << endl;
    cin >> age;

    switch (age)
    {
    case 10:
        cout << "you are 10 years old" << endl;
        break;

    default:
        cout << "you are not 10 year old";
    }

        return 0;
    }
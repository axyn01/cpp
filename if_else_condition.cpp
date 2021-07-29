#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age" << endl;
    cin >> age;
    if (age > 100)
    {
        cout << "invalid age";
    }
    else if (age >= 18)
    {
        cout << "you can drive";
    }
    else
    {
        cout << "you cannot drive";
    }

    return 0;
}
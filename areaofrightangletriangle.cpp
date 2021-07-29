#include <iostream>
using namespace std;
int main()
{
    float b, h, area;
    cout << "enter base of the triangle" << endl;
    cin >> b;
    cout << "enter height of the triangle" << endl;
    cin >> h;
    area = 0.5 * b * h;
    cout << "area = " << area;
    return 0;
}
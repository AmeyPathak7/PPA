// 16.4.25

#include <iostream>
using namespace std;

float Area(float Rad, float PI = 3.14f)
{
    float Ans = 0.0f;
    Ans = PI * Rad * Rad;
    return Ans;
};

int main()
{
    float input = 0.0f, Result = 0.0f;

    cout << "Enter the radius of circle  : \n";
    cin >> input;

    Result = Area(input, 7.10f);
    cout << "Area of a circle is  :" << Result << "\n";

    Result = Area(input);
    cout << "Area of a circle as per defult constructor  :" << Result << "\n";

    return 0;
}

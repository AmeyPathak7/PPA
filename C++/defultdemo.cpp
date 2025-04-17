//16.4.25

#include <iostream>
using namespace std;

float Area(float Rad, float PI)
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
    Result = Area(input, 3.14f);

    cout << "Area of a circle is :"<<Result <<"\n";

    return 0;
}
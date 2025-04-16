/*#include <iostream>
using namespace std;

class Arithematic
{
public:
    int No1;
    int No2;

    Arithematic()
    {
        cout << "Inside defult constructor\n";
        No1 = 0;
        No2 = 0;
    }
    Arithematic(int A, int B)
    {
        cout << "Inside Parametised constructor\n";
        No1 = A;
        No2 = B;
    }
    ~Arithematic()
    {
        cout << "Inside  distructor\n";
    }

    int Addition()
    {
        int Ans = 0;
        Ans = No1 + No2;
        return Ans;
    }
    int Substrction()
    {
        int Ans = 0;
        Ans = No1 - No2;
        return Ans;
    }
};

int main()
{

    Arithematic obj1;
    Arithematic obj2(11, 10);
    int Ret = 0;

    Ret = obj1.Addition();
    cout << "Addition of obj1 is :" << Ret << "\n";

    Ret = obj1.Addition();
    cout << "Addition of obj2 is :" << Ret << "\n";

    Ret = obj1.Substrction();
    cout << "Substraction of obj1 is :" << Ret << "\n";

    Ret = obj1.Substrction();
    cout << "Substraction of obj2 is :" << Ret << "\n";
    return 0;
}

****************************************************************************
*/


#include <iostream>
using namespace std;

class Arithematic
{
public:
    int No1;
    int No2;

    Arithematic()
    {
        cout << "Inside default constructor\n";
        No1 = 0;
        No2 = 0;
    }
    Arithematic(int A, int B)
    {
        cout << "Inside parameterized constructor\n";
        No1 = A;
        No2 = B;
    }
    ~Arithematic()
    {
        cout << "Inside destructor\n";
    }

    int Addition()
    {
        return No1 + No2;
    }
    int Subtraction()
    {
        return No1 - No2;
    }
};

int main()
{
    Arithematic obj1;
    Arithematic obj2(11, 10);
    int Ret = 0;

    Ret = obj1.Addition();
    cout << "Addition of obj1 is: " << Ret << "\n";

    Ret = obj2.Addition();  // Corrected function call
    cout << "Addition of obj2 is: " << Ret << "\n";

    Ret = obj1.Subtraction();
    cout << "Subtraction of obj1 is: " << Ret << "\n";

    Ret = obj2.Subtraction();  // Corrected function call
    cout << "Subtraction of obj2 is: " << Ret << "\n";

    return 0;
}

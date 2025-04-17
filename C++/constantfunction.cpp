// 16.4.25
// This program demonstrates the use of constant functions in C++.
#include <iostream>
using namespace std;

class demo
{
public:
    int i, j;

    demo(int a = 0, int b = 0)
    {
        i = a;
        j = b;
    }
    void fun()
    {
        this->i++;
        this->j++;
    }
    void gun() const
    {
    }
};
int main()
{
    demo obj1(10, 20); // i = 10 / j = 20
    demo obj2(30, 40); // i = 30 / j = 40

    cout << obj1.i << "\t" << obj1.j << "\t" << "\n";
    obj1.fun();
    cout << obj1.i << "\t" << obj1.j << "\t" << "\n"  << "\n";

    cout << obj2.i << "\t" << obj2.j << "\t" << "\n";
    obj1.fun();
    cout << obj2.i << "\t" << obj2.j << "\t" << "\n";

    return 0;
}

// Output:
// 10	20
// 11	21
// 30	40
// 30	40


// Explanation:
// 1. The program defines a class `demo` with two member variables `i` and `j` and a constructor to initialize them.
// 2. The class has a non-constant member function `fun()` that increments the values of `i` and `j`.
// 3. The class also has a constant member function `gun()` that does nothing in this case.
// 4. In the `main()` function, two objects of the class `demo` are created with different initial values for `i` and `j`.
// 5. The values of `i` and `j` for the first object are printed, then the `fun()` function is called to increment them, and the new values are printed again.
// 6. The same process is repeated for the second object, but since `fun()` is not called on it, its values remain unchanged.
// 7. The output shows the values of `i` and `j` for both objects before and after calling `fun()` on the first object.
// 8. The constant function `gun()` is defined but not used in this example, demonstrating that it can be part of the class without affecting the program's behavior.
// 9. The program illustrates the concept of constant functions in C++, which can be used to indicate that a member function does not modify the object on which it is called.
// 10. The program also shows how to use the `this` pointer to access member variables within member functions.
// 11. The program is a simple demonstration of class member functions, constructors, and the use of constant functions in C++.
// 12. The output of the program is as above:

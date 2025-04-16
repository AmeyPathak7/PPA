#include <iostream>

using namespace std;

class Demo
{
public:                            // function over loading : example ( here we are createing addition multipule class with the same name and different behaviours )
    int addition(int no1, int no2) // the name is automaticaly change ' addition2@ii ' internlly    ( name magling )
    {
        cout << "inside first addition\n";
        return no1 + no2;
    }

    int addition(int no1, int no2, int no3) // the name is automaticaly change ' addition3@iii ' internally
    {
        cout << "inside second addition\n";
        return no1 + no2 + no3;
    }

    int addition(float no1, float no2) // the name is automaticaly change ' addition2@ff ' internally
    {
        cout << "inside third addition\n";
        return no1 + no2;
    }
};

int main()
{
    Demo obj;
    cout << obj.addition(10, 11) << "\n";
    cout << obj.addition(10, 11, 21) << "\n";
    cout << obj.addition(10.34f, 11.56f) << "\n";

    return 0;
}

// ambicuty errror is created  due to rename file un c language
// but it is not create in c++ because it is accepet .

/*

1:45 (recordiing thming)


void fun()
void fun(int q);
Yes !


int fun()
void fun()
NO !

int fun(int a, int b)
int fun(int i, int j)
No !

void fun(int i, float f)
void fun(float i, int f)
Yes !

void fun(int a , int b, int c)
void fun(int a , int b, int c,int d)
void fun(int a , int b, int c)
void fun(int a )
Yes !

void fun(int i)
void gun(int i,int j)
No !






*/

#include <iostream>
#include <string>

using namespace std;

void line(char symb, int count)
{//порожня функція
    for (int i = 0; i < count; ++i) cout << symb;

    cout << endl;
}

string line2(char symb, int count)
{
    string result = "";
    for (int i = 0; i < count; ++i) result += symb;

    cout << endl;

    return result;
}

void max(int num1=0, int num2=-2)
{
    (num1 < num2) ? cout << num2 << endl : cout << num2;
}

int maxReturn(int num1 = 0, int num2 = -2); //прототип

int main()
{
    system("chcp 1251>null");
    //cout << "Hello World!\n";

    //line('+', 10);
    //line('#', 15);

    //char symb = '@';
    //int count = 5;

    //line(symb, count);

    //cout << line2('%', 12);
    //cout << line2(symb, count);

    //cout << endl;

    max();
    max(10, 15);
    cout << maxReturn() << endl;
    cout << maxReturn(10, 15) << endl;

    return 0;
}

int maxReturn(int num1, int num2)
{
    return (num1 < num2) ? num2 : num1;
}
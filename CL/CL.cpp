#include <iostream>

using namespace std;

void line(char symb, int count)
{//порожня функція
    for (int i = 0; i < count; ++i) cout << symb;
    cout << endl;
}

int main()
{
    system("chcp 1251>null");
    cout << "Hello World!\n";

    line('+', 10);
    line('#', 15);
    char symb = '@';
    int count = 5;
    line(symb, count);

    return 0;
}
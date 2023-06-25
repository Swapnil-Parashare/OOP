#include<iostream>

using namespace std;

void func(int* x )
{
    *x = *x + 10;
}

int main()
{
    int* var = new int(5);
    func(var);

    cout << *var << endl;
}
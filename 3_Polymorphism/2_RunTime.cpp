#include<iostream>

using namespace std;


// Function Overriding.

class Father
{
    public :

    void work()
    {
        cout << "Government Servant" << endl;
    }
};

class Son : public Father
{
    public : 

    void work()
    {
        cout << "IT Professional" << endl;
    }
};

int main()
{
    Son S1;
    S1.work();

    Father F1;
    F1.work();
}
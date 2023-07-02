#include<iostream>

using namespace std;

class Complex
{
    private : 

    int real;
    int imaginary;

    public : 

    // Non Parameterized Constructor.
    Complex(){}

    // Parameterized Constructor.
    Complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    void getData()
    {
        if(this->imaginary > 0)
        {
            cout << this->real << " + " << this->imaginary << "i"<< endl;
        }
        else
        {
            cout << this->real << " - " << (-1)*this->imaginary << "i" << endl;
        }
    }

    friend Complex add(Complex c1, Complex c2);                                          // This is just declaration. Actual implementation is outside the class. (You can also write the implementation here itself.)

};


// Friend Function
Complex add(Complex c1, Complex c2)
{
    Complex ans;
    ans.real = c1.real + c2.real;
    ans.imaginary = c1.imaginary + c2.imaginary;

    ans.getData();

    return ans;
}

int main()
{   
    Complex c1(5,8);
    Complex c2(3,-12);

    c1.getData();
    c2.getData();

    Complex c3 = add(c1,c2);

    c3.getData();

    

}

/*
1. Friend Function are not the member function of the class.
2. Hence object of the class cannot access this funciton using the Dot(.) operator, as we usually do.
3. But it can accept the object as a parameter & can access their private and protected data members.
3. You don't need an object to access this function.
4. It just like the normal function which is outside the class, but still can access the private & protected data members of the class.

*/
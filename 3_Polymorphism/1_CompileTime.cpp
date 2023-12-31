#include<iostream>

using namespace std;

class Human
{
    public : 


    // 1. Function Overloading  : Parametre should be different. Just changing the return type of function won't work.
    void welcome()
    {
        cout << "Welcome !!!" << endl; 
    }
 
    void welcome(string name)
    {
        cout << "Welcome " << name << " !!!" << endl;
    }

};

// 2. Operator Overloading

class Complex
{
    private :
    int real ;
    int imaginary;

    public : 
    
    Complex()
    {

    }

    Complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }


    Complex operator+(Complex& obj)
    {
        int real1 = this->real;
        int imaginary1 = this->imaginary;

        int real2 = obj.real;
        int imaginary2 = obj.imaginary;

        Complex result;
        result.real = real1 + real2;
        result.imaginary = imaginary1 + imaginary2;

        return result;
    }

    void getData()
    {
        if(this->imaginary > 0)
        {
            cout << this->real << " + " << this->imaginary << "i" << endl;
        }
        else
        {
            cout << this->real << " - " << (-1)*(this->imaginary) << "i" << endl;
        }
    }

};


//  Example 2 of operator overloading.
/*
Using modulo operator '%' to perform multiplication.
We can literally do whatever we want through operator overloading.
*/

class Demo
{
    public : 

    int num;

    Demo(int num)
    {
        this->num = num;
    }

    int operator%(Demo& obj)
    {
        return this->num * obj.num;
    }
};

// Example 3 : Overloading Unary Operator


class Unary
{
    
    public : 
    
    void operator!()
    {
        cout << "It is what it is!!!" << endl;
    }
};


int main()
{
    Complex obj1(3,4);
    Complex obj2(4,-7);

    Complex ans = obj1 + obj2;

    ans.getData();


   /**************************************************/
    Demo d1(4);
    Demo d2(5);

    cout << d1%d2 << endl;

    /**************************************************/

    Unary u1;
    !u1;




}
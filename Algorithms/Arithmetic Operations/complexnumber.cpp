#include <iostream>
using namespace std;
class complexnumber{
    int realpart, imaginarypart;
    public:
    complexnumber(){//Null Constructor
        realpart = 1;
        imaginarypart = 2;
    }
    complexnumber(int real, int imaginary){ //Parameterized Constructor
        realpart = real;
        imaginarypart = imaginary;
    }
    complexnumber(const complexnumber &c){ //Copy Constructor
        realpart = c.realpart;
        imaginarypart = c.imaginarypart;
    }
    void display(){
        cout<<realpart<<"+"<<imaginarypart<<"i"<<endl;
    }
    complexnumber addition(complexnumber secondnumber){ //Addition Method
        realpart = this->realpart + secondnumber.realpart;
        imaginarypart = this->imaginarypart + secondnumber.imaginarypart;
        return complexnumber(realpart, imaginarypart);
    }
    complexnumber subtraction(complexnumber secondnumber){ //Subtraction Method
        realpart = this->realpart - secondnumber.realpart;
        imaginarypart = this->imaginarypart - secondnumber.imaginarypart;
        return complexnumber(realpart, imaginarypart);
    }
    complexnumber multiplication(complexnumber secondnumber){ //Addition Method
        realpart = this->realpart * secondnumber.realpart;
        imaginarypart = this->imaginarypart * secondnumber.imaginarypart;
        return complexnumber(realpart, imaginarypart);
    }
    complexnumber operator+(complexnumber secondnumber){ //Operator overloading
    realpart = this->realpart + secondnumber.realpart;
    imaginarypart = this->imaginarypart + secondnumber.imaginarypart;
    return complexnumber(realpart, imaginarypart);
    }
};
int main(){
    complexnumber c1; //invoking the Null constructor
    complexnumber c2(3,4); //invoking the parameterized constructor
    complexnumber c3(c2); //invoking the copy constructor
    
    complexnumber c4 = c1.addition(c2); //invoking the addition method
    c4.display();

    complexnumber c4 = c1 + c2; //invoking the Operator overloading method
    c4.display();

    complexnumber c5 = c1.subtraction(c2); //invoking the subtraction method
    c5.display();
    complexnumber c6 = c1.multiplication(c2); //invoking the multiplication method
    c6.display();
    return 0;
}
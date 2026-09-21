#include<iostream>
using namespace std;
class Complex{
    int real = 3;
    int img = 4;
    public: 

    Complex() {};
    Complex operator +(int real, int img, Complex& p3) {
        p3.real = this->real + real;
        p3.img = this->img + img;

        return p3;
    }
}; 
int main() {
    Complex p1(3, 4);
    Complex p2(p1);

    Complex p3 = p1 + p2;
    return 0;
} 
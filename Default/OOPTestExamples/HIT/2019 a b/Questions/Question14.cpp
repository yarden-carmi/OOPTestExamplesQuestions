// שאלה 14
// מה מדפיסה התכנית הבאה?

#include <iostream>

class A {
public:
    A(int) {
        std::cout << " A int ";
    }
    A() {
        std::cout << "A empty ";
    }
    ~A() {
        std::cout << " destroy A";
    }
};

class B : public A {
public:
    B(int) {
        std::cout << "B int ";
    }
    B() {
        std::cout << "B empty ";
    }
    ~B() {
        std::cout << " destroy B";
    }
};

void main() {
    B *b;
    A a(3);
    b = new B();
    A *ap = b;
    delete ap;
}

/*
(א) A int B empty destroy A destroy B destroy B
(ב) A int A empty B empty destroy A destroy A
(ג) B int A int destroy A destroy B
(ד) A int B int destroy A destroy B destroy A
*/

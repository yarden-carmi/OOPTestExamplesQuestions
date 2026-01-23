// שאלה 13
// מה מדפיסה התכנית הבאה:

#include <iostream>
class X {
public:
    void f() { std::cout << 1; }
};
class Y : public X {
public:
    virtual void f() { std::cout << 2; }
};
void main() {
    Y y;
    X *p = &y;
    p->f();
}

/*
תשובות אפשריות:
(א) 1
(ב) 2
(ג) 12
(ד) 21
*/

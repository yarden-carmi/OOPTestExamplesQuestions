// שאלה 6
// מה צריך להיכתב בשורה 3 כדי שהתכנית הבאה תתקמפל ותדפיס :1

#include <iostream>

class X {
public:
    X& f() { return _____; }
};
void main() {
    X x;
    std::cout << (&x == &x.f());
}


/*
תשובות אפשריות:
(א) new X
(ב) X()
(ג) this
(ד) *this
*/

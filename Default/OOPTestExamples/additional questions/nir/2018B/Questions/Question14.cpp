// שאלה 14
// מה מדפיסה התכנית הבאה:

#include <iostream>
class X {
public:
    X() { std::cout << 1; }
    ~X() { std::cout << 2; }
};
class Y : public X {
public:
    Y() { std::cout << 3; }
    ~Y() { std::cout << 4; }
};
void main() {
    X *x = new Y;
}

/*
תשובות אפשריות:
(א) 34
(ב) 13
(ג) 134
(ד) 1342
*/

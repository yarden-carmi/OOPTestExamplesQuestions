// שאלה 12
// מה מדפיסה התכנית הבאה?

#include <iostream>

static int K = 1;

struct A {
    static int K;
    A() {
        K++;
    }
};

int A::K = 1;

void main() {
    A a;
    A *b = &a;
    A &c = *b;
    std::cout << K << c.K << A::K;
}

/*
(א) התכנית לא עוברת קומפילציה
(ב) 132
(ג) 211
(ד) 122
*/

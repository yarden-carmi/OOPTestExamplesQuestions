// שאלה 2
// מה מדפיסה התכנית?

#include <iostream>
class X {
public:
    int f;
};
void g(X x) { x.f = 5; }
void main() {
    X x;
    x.f = 3;
    g(x);
    std::cout << x.f;
}

/*
תשובות אפשריות:
(א) התכנית לא עוברת קומפילציה
(ב) 3
(ג) 5
(ד) אף תשובה אינה נכונה
*/

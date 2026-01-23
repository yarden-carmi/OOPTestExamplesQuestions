// שאלה 21
// מה מדפיסה התכנית?

#include <iostream>
int n = 0;
class A {
public:
A() : y(++n), x(++n) { std::cout << x << y; }
int x;
int y;
};
void main() { A a; }

/*
(א) 11
(ב) 12
(ג) 21
(ד) 22
*/

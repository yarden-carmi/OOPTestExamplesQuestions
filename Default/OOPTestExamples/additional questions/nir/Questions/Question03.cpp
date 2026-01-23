// שאלה 3
// מה מדפיסה התכנית?

#include <iostream>
class X {
public: X(int n) { std::cout << n; }
};
X a(1);
void main() {
    X a(2);
    X b(3);
}

/*
תשובות אפשריות:
(א) 123
(ב) 23
(ג) 231
(ד) 321
*/

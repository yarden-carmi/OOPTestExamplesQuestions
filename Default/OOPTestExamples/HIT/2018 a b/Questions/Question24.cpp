// שאלה 24
// מה מדפיסה התכנית הבאה?

#include <iostream>
template<typename T> class X {
public:
    static int x;
    X() { std::cout << ++x; }
};
template<typename T> int X<T>::x = 0;
void main() {
    X<int> a;
    X<int> b;
    X<double> c;
}

/*
תשובות אפשריות:
(א) 000
(ב) 111
(ג) 121
(ד) 123
*/

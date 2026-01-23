// שאלה 8
// מה מדפיסה התכנית?

#include <iostream>
template<int N> class X {
public:
X() { ++d; }
static int d;
};
template<int N> int X<N>::d = 0;
void main() {
X<0> a, b;
X<1> c;
std::cout << a.d << b.d << c.d;
}

/*
(א) 000
(ב) 123
(ג) 221
(ד) 333
*/

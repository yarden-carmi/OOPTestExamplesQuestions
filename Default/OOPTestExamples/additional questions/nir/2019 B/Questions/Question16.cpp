// שאלה 16
// מה מדפיסה התכנית?

#include <iostream>
using namespace std;
class X {
public:
X(int i = 0) : nx(i) { cout << 1; }
int nx;
};
class Y {
public:
Y(int i = 0) : ny(i) { onx=X(i); }
int ny;
X onx;
};
int main() {
Y y1(2);
y1.onx.nx = 3;
}

/*
(א) 1
(ב) 11
(ג) 13
(ד) 111
*/

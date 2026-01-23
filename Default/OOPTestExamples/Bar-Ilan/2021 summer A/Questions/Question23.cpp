// שאלה 23
// מה יודפס כתוצאה מהרצת התכנית הבאה?

#include<iostream>
using namespace std;
class X {
public:
    X() { if (dynamic_cast<X*>(this)) cout << "X"; }
};
class Y:public X {
public:
    Y() { if (dynamic_cast<X*>(this)) cout << "Y"; }
};
class Z : public Y {
public:
    Z() { if (dynamic_cast<Y*>(this)) cout << "Z"; }
};
class W : public Z {
public:
    W() { if (dynamic_cast<Y*>(this)) cout << "W"; }
};
void main() {
    W w;
}

/*
תשובות אפשריות:
א. XYZW
ב. YZW
ג. YZ
ד. XYZ
ה. X
ו. כל התשובות האחרות אינן נכונות או שהתכנית אינה עוברת קומפילציה
*/
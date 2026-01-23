// שאלה 25
// מה יודפס כתוצאה מהרצת התכנית הבאה?

#include<iostream>
using namespace std;
class X {
public:
    virtual void func1() { cout << "X"; }
};
class Y:public X {
public:
    virtual void func1() { cout << "Y"; }
};
class Z : public Y {
protected:
    virtual void another_func() { func1(); }
};
class W : public Z {
public:
    void another_func() { Z::another_func(); }
};
void main() {
    W* ptr = new W;
    ptr->another_func();
}

/*
תשובות אפשריות:
א. Y
ב. X
ג. XX
ד. XY
ה. YY
ו. YX
*/
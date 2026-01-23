// שאלה 24
// מה יודפס כתוצאה מהרצת התכנית הבאה?

#include<iostream>
using namespace std;
class X {
public:
    virtual void func() { cout << "X"; }
};
class Y:public X {
public:
    void func() { cout << "Y"; }
};
class Z : public Y {
public:
};
class W : public Z {
public:
    virtual void func() { cout << "W"; }
};
void main() {
    X* ptr1 = new X;
    X* ptr2 = new Y;
    X* ptr3 = new Z;
    X* ptr4 = new W;
    ptr1->func();
    ptr2->func();
    ptr3->func();
    ptr4->func();
}

/*
תשובות אפשריות:
א. XYYW
ב. XXXX
ג. XXXW
ד. XYYY
ה. התכנית אינה עוברת קומפילציה
ו. כל התשובות האחרות אינן נכונות
*/
// שאלה 5
// מה יודפס כתוצאה מהרצת התכנית הבאה?

#include<iostream>
using namespace std;
class A {
    int _x;
public:
    A() { _x = 1; }
    A(const A& a) { _x = 2; }
    ~A() { _x = 3; }
    friend class B;
};
class B {
    A _a;
public:
    B() { _a._x = 4; cout << _a._x; }
};
void main() {
    B b;
}

/*
תשובות אפשריות:
א. התכנית לא תתקמפל
ב. לא יודפס כלום
ג. 1
ד. 2
ה. 3
ו. 4
*/
// שאלה 22
// מה יודפס בהרצת התכנית הבאה?

#include<iostream>
using namespace std;
class A {};
class B : public A {};
class C: public B {};
class D : public C {};
void main() {
    B* ptr = new D;
    cout << typeid(ptr).name() << endl;
}

/*
תשובות אפשריות:
א. class B *
ב. class D
ג. class A
ד. class C
ה. התכנית לא עוברת קומפילציה
ו. התכנית קורסת בזמן ריצה
*/
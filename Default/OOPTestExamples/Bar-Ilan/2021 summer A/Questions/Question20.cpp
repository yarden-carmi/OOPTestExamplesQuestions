// שאלה 20
// איזו מבין השורות הבאות במקום שני סימני השאלה (??) יגרמו לתכנית לא לעבור קומפילציה?

#include<iostream>
using namespace std;
class A {};
class B : public A {};
class C: public B {};
class D : public C {};
void main() {
    B* ptr = NULL;
    //??
}

/*
תשובות אפשריות:
א. ptr = new A;
ב. ptr = new B;
ג. ptr = new C;
ד. ptr = new D;
ה. יש יותר מתשובה אחת נכונה
*/
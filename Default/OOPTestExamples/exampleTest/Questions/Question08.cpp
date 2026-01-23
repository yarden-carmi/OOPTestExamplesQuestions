// שאלה 8
// מה יודפס כתוצאה מהרצת התכנית הבאה?

#include<iostream>
using namespace std;
class A {
private:
    static int num;
public:
    A() { num++; }
    static void func() { num++; cout << num; }
};
class B {
private:
    static int num;
public:
    B() { num++; }
    static void func() { num++; cout << num; }
};
int A::num = 0;
int B::num = 0;
void main() {
    A a;
    B b = new B;
    A a1;
    A::func();
    B::func();
}

/*
תשובות אפשריות:
א. 22
ב. 00
ג. 02
ד. 20
ה. 40
ו. כל התשובות האחרות אינן נכונות
*/
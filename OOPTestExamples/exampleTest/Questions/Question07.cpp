// שאלה 7
// מה יודפס כתוצאה מהרצת התכנית הבאה?

#include<iostream>
using namespace std;
class A {
public:
    A() { cout << "*"; } //1 star
    A(int a) { cout << "**"; } //2 stars
    A(const A& a) { cout << "***"; } //3 stars
};
class B {
    A _a;
public:
    B():_a(5) { cout << "*"; } //1 star
    B(int b) { cout << "**"; } //2 stars
    B(const A a) : _a(a) { cout << "***"; } //3 stars
    B(const B& b) { cout << "****"; } //4 stars
};
class C {
    B b;
    A _a;
public:
    C(const A& a) : _a(a) { cout << "**"; } //2 stars
};
void main() {
    A a;
    C c(a);
}

/*
תשובות אפשריות:
א. 9 כוכביות
ב. התכנית לא תתקמפל
ג. 7 כוכביות
ד. 6 כוכביות
ה. 8 כוכביות
ו. כל התשובות האחרות אינן נכונות
*/
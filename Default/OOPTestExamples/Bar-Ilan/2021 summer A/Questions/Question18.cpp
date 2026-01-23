// שאלה 18
// איזו מהאפשרויות הבאות יש להוסיף כדי שהקוד הבא יתקמפל?

#include<iostream>
using namespace std;
class A {
public:
};
class B {
public:
};
void main() {
    A a;
    B b;
    a + b;
}

/*
תשובות אפשריות:
א. in class B: friend A operator+(const A& a, const B& b) { return A(); }
ב. in class A: friend A operator+(const A& a, const B& b) { return A(); }
ג. in class A: A operator+(const A& a, const B& b) { return A(); }
ד. in class B: A operator+(const A& a, const B& b) { return A(); }
ה. in class B: A operator+(const B& b) { return A(); }
ו. כל התשובות האחרות אינן נכונות
*/
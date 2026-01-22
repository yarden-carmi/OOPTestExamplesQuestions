// שאלה 1
// נתונות המחלקה והתכנית הראשית הבאות. מהו מספר הפעמים שתודפס הספרה 1 למסך עקב הפעלת התכנית?

#include<iostream>
using namespace std;
class A {
public:
    A() { cout << "1"; }
    A(const A& a) { cout << "1"; }
    A anyFunc(A& a1, A* a2, A a3) {
        cout << "1";
        return *a2;
    }
};
void main() {
    A a;
    a.anyFunc(a, &a, a);
}

/*
תשובות אפשריות:
א. 1
ב. 2
ג. 3
ד. 4
ה. 5
ו. התכנית לא תתקמפל
*/

// שאלה 12
// איזו מבין האופציות הבאות של func אפשר למחוק והתכנית עדיין תתקמפל? יש לבחור את התשובה המקיפה ביותר.

#include<iostream>
using namespace std;
void func(int x) {} //option 1
void func(float x) {} //option 2
void func(double x) {} //option 3
void func(char x) {} //option 4
void main() {
    func(1);
    func(1.1);
    func('x');
}

/*
תשובות אפשריות:
א. כל התשובות נכונות
ב. option 2
ג. option 2, option 4
ד. option 4
ה. option 2, option 3, option 4
ו. option 1, option 2, option 3
*/
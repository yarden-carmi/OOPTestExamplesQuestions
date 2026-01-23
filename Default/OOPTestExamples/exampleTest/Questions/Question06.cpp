// שאלה 6
// איזו טענה נכונה לגבי קטע הקוד הבא?

#include<iostream>
using namespace std;
class A {
public:
    int _x;
    A(int x):_x(x) {}
};
class B {
    A _a;
public:
    B() {}
};
void main() {
    B b;
}

/*
תשובות אפשריות:
א. קטע הקוד לא יתקמפל כי לא מוגדר בנאי ברירת המחדל (default constructor) למחלקת A
ב. קטע הקוד לא יתקמפל כי בנאי ברירת המחדל (default constructor) של מחלקה B ריק
ג. קטע הקוד יתקמפל
ד. כל התשובות האחרות אינן נכונות
*/
// שאלה 14
// נתון הקוד הבא. יש לבחור את אופן המימוש של אופרטור ההשמה (=) בצורה הנכונה ביותר והמחמירה ביותר (מבחינת const) מבין האפשרויות.

#include<iostream>
using namespace std;
class X {
private:
    int _x;
public:
    // operator assignment (=) implementation
};
void main() {
    X x1, x2, x3;
    x1 = x2 = x3;
}

/*
תשובות אפשריות:
א. const X& operator=(const X& o) { _x = o._x; return *this; }
ב. const X& operator=(const X& o) const { _x = o._x; return *this; }
ג. const X& operator=(X& o) { _x = o._x; return *this; }
ד. X& operator=(const X& o) { _x = o._x; return *this; }
ה. const X& operator=(const X& o) const { _x = o._x; return o; }
ו. const X& operator=(X& o) { _x = o._x; return o; }
*/
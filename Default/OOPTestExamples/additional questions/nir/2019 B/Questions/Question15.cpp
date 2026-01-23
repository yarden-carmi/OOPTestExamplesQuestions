// שאלה 15
// בקטע הקוד הבא:

#include <iostream>
using namespace std;
class X {
public:
X(int i = 0) { nx = i; }
virtual void f() = 0;
int nx;
};
class Y : public X {
public:
Y(int i = 0, int j=0) : X(i), ny(j) { }
virtual void f() { cout << "Y" << ny; }
int ny;
};
int main() {
X *x[2];
x[0] = new X(1);
x[1] = new Y(2, 3);
X x2(2);
}

/*
(א) מתקבלת שגיאת קומפילציה בשורות 16,17,18,19
(ב) מתקבלת שגיאת קומפילציה בשורות 17,18,19
(ג) מתקבלת שגיאת קומפילציה בשורות 17,19
(ד) לא מתקבלת שגיאת קומפילציה
*/
